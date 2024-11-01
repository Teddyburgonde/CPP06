/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functionsDisplayMessage.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:23:24 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/01 16:23:26 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::display_char_message(char c)
{
	std::cout << "Value in char : '" << c << "'" << std::endl;
	std::cout << "Value in int : " <<static_cast<int>(c) << std::endl;
	std::cout << "Value in float :" <<static_cast<float>(c) << "f" << std::endl;
	std::cout << "Value in double " <<static_cast<double>(c) << std::endl;
}

void	ScalarConverter::display_int_message(long int nb)
{
	if ((nb >= 0 && nb <= 127) && std::isprint(nb))
		std::cout << "Value in char :         '"<< static_cast<char>(nb) << "'" << std::endl;
	else
		std::cout << "Value in char :		impossible" << std::endl;
	if (nb > INT_MAX || nb < INT_MIN)
		std::cout << "Value in int :		impossible" << std::endl;
	else
		std::cout << "Value in int :          "<< nb << std::endl;
	std::cout << "Value in float :	"<< static_cast<float>(nb) << "f" << std::endl;
	std::cout << "Value in double :	"<< static_cast<double>(nb)  << std::endl;
}

void	ScalarConverter::display_float_message(float f)
{
	if ((f < 0 && f > 127) || !std::isprint(f))
		std::cerr << "Value in char :		impossible" << std::endl;
	else  
		std::cout << "Value in char :		impossible" << std::endl; // ????
	if (f < static_cast<float>(INT_MIN)>(f) || f > static_cast<float>(INT_MAX)>(f))
		std::cout << "Value in int :		impossible" << std::endl;
	else
		std::cout << "Value in int :          "<< static_cast<int>(f) << std::endl;
	std::cout << "Value in float :	"<< static_cast<float>(f) << "f" << std::endl;
	std::cout << "Value in double :	"<< static_cast<double>(f) << std::endl;
}

void	ScalarConverter::display_double_message(double d)
{
	if ((d >= 0 && d <= 127) && std::isprint(d))
		std::cout << "Value in char :         '"<< static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "Value in char :		impossible" << std::endl;
	if (d < static_cast<float>(INT_MIN)>(d) || d > static_cast<float>(INT_MAX)>(d))
		std::cout << "Value in int :		impossible" << std::endl;
	else
	 	std::cout << "Value in int :          "<< static_cast<int>(d) << std::endl;
	std::cout << "Value in float :	"<< static_cast<float>(d) << "f" << std::endl;
	std::cout << "Value in double :	"<< d << std::endl;
}

void ScalarConverter::display_nan_message()
{
	std::cout << "Value in char :		impossible" << std::endl;
	std::cout << "Value in int :		impossible" << std::endl;
	std::cout << "Value in float :	nanf" << std::endl;
	std::cout << "Value in double :	nan" << std::endl;
}



void ScalarConverter::display_p_inf_message()
{
	std::cout << "Value in char :		impossible" << std::endl;
	std::cout << "Value in int :		impossible" << std::endl;
	std::cout << "Value in float :	+inff" << std::endl;
	std::cout << "Value in double :	+inf" << std::endl;
}
void ScalarConverter::display_n_inf_message()
{
	std::cout << "Value in char :		impossible" << std::endl;
	std::cout << "Value in int :		impossible" << std::endl;
	std::cout << "Value in float :	-inff" << std::endl;
	std::cout << "Value in double :	-inf" << std::endl;
}
