/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:31:45 by cpoulain          #+#    #+#             */
/*   Updated: 2025/06/12 14:49:55 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cmath>
#include <string>
#include <cerrno>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <climits>
#include <float.h>
#include <iomanip>
#include <iostream>
#include <math.h>
#include "Messages.h"

#define SCALAR_TYPE_COUNT	4

enum e_scalar_types
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE
} typedef t_scalar_types;

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter	&operator=(const ScalarConverter &other);

	public:
		~ScalarConverter();
		static void	convert(const std::string &input);
};
