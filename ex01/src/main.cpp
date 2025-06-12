/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:19:18 by cpoulain          #+#    #+#             */
/*   Updated: 2025/06/12 15:23:02 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"
#include <iostream>

int	main()
{
	Data	data;

	data.x = 945823;
	data.y = 252824;
	data.z = 23497824;

	Data	*data_ptr(&data);
	std::cout << "Pre-Serialization" << std::endl;
	std::cout << "x: " << data_ptr->x << std::endl;
	std::cout << "y: " << data_ptr->y << std::endl;
	std::cout << "z: " << data_ptr->z << std::endl;

	std::cout << std::endl;

	uintptr_t	serialized(Serializer::serialize(data_ptr));
	Data		*deserialized(Serializer::deserialize(serialized));

	std::cout << "Post-Serialization" << std::endl;
	std::cout << "x: " << deserialized->x << std::endl;
	std::cout << "y: " << deserialized->y << std::endl;
	std::cout << "z: " << deserialized->z << std::endl;
}
