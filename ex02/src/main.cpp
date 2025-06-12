/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:36:44 by cpoulain          #+#    #+#             */
/*   Updated: 2025/06/12 15:47:38 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include "../includes/Base.hpp"

int	main()
{
	std::srand(std::time(0));

	std::cout << "Generation" << std::endl;

	Base	*tab[3];
	for (int i = 0; i < 3; i++)
		tab[i] = generate();

	std::cout << "Pointers identification" << std::endl << std::endl;

	for (int i = 0; i < 3; i++)
		identify(tab[i]);

	std::cout << std::endl << "Refs identification" << std::endl << std::endl;

	for (int i = 0; i < 3; i++)
		identify(*tab[i]);

	for (int i = 0; i < 3; i++)
		delete tab[i];
}
