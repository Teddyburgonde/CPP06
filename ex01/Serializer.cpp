/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:44:04 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/02 11:42:16 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::~Serializer(){}

Serializer::Serializer(Serializer const &cpy)
{
	*this = cpy;
}

Serializer & Serializer::operator=(Serializer const &rhs)
{
	if (this != &rhs)
	{
		
	} 
	return (*this);
}	

uintptr_t Serializer::serialize(t_data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

t_data * Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<t_data*>(raw);
}