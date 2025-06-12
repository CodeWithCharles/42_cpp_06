/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:09:51 by cpoulain          #+#    #+#             */
/*   Updated: 2025/06/12 15:11:24 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include "Data.h"

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &other);
		Serializer	&operator=(const Serializer &other);
	public:
		~Serializer();
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};
