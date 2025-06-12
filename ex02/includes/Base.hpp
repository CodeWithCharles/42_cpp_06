/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:24:40 by cpoulain          #+#    #+#             */
/*   Updated: 2025/06/12 15:44:04 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <iostream>

class A;
class B;
class C;

class Base
{
	public:
		virtual ~Base();
};

Base	*generate();
void	identify(Base *p);
void	identify(Base &p);
