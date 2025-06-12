/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:35:14 by cpoulain          #+#    #+#             */
/*   Updated: 2025/06/12 14:53:59 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) {(void)other;}
ScalarConverter::~ScalarConverter() {}
ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &other) {(void)other;return(*this);}

void	ScalarConverter::convert(const std::string &input)
{
	std::stringstream	converted[SCALAR_TYPE_COUNT];
	char				*end;
	double				d;
	long				l;

	d = strtod(input.c_str(), &end);
	l = static_cast<long>(d);
	if (end == input.c_str() || l < CHAR_MIN || l > CHAR_MAX)
		converted[CHAR] << IMPOSSIBLE;
	else if (!isprint(l))
		converted[CHAR] << NON_D;
	else
		converted[CHAR] << '\'' << static_cast<char>(l) << '\'';
	if (end == input.c_str() || l < INT_MIN || l > INT_MAX)
		converted[INT] << IMPOSSIBLE;
	else
		converted[INT] << static_cast<int>(l);
	if (end == input.c_str() || errno == ERANGE || ((d < -FLT_MAX || d > FLT_MAX) && !isinf(d)))
		converted[FLOAT] << IMPOSSIBLE;
	else if (static_cast<float>(d) == ceilf(static_cast<float>(d)) && !isinf(d))
		converted[FLOAT] << std::fixed << std::setprecision(0) << static_cast<float>(d) << ".0f";
	else
		converted[FLOAT] << static_cast<float>(d) << "f";
	if (end == input.c_str() || errno == ERANGE)
		converted[DOUBLE] << IMPOSSIBLE;
	else if (d == ceil(d) && !isinf(d))
		converted[DOUBLE] << std::fixed << std::setprecision(0) << d << ".0";
	else
		converted[DOUBLE] << d;

	std::cout << "char: " << converted[CHAR].str() << std::endl;
	std::cout << "int: " << converted[INT].str() << std::endl;
	std::cout << "float: " << converted[FLOAT].str() << std::endl;
	std::cout << "double: " << converted[DOUBLE].str() << std::endl;
}
