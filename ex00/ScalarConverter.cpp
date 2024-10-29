/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:25:13 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/29 19:09:07 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter const &cpy)
{
	*this = cpy;
}

ScalarConverter const & ScalarConverter::operator=(ScalarConverter const &rhs)
{
    return (*this);
}

void ScalarConverter::convert(std::string const &literal)
{
	
}


/*

Conversion vers double :

    Pour un double, tu feras une vérification similaire à celle du float, 
	mais sans le suffixe f. 
	Encore une fois, tu devras gérer des littéraux spéciaux comme nan, -inf, et +inf.

Affichage des résultats :

    Une fois les conversions effectuées, tu afficheras les valeurs converties pour chaque type.
*/