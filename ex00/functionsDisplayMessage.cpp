/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functionsDisplayMessage.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:23:24 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/09 18:04:49 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::display_char_message(char c)
{
	std::cout << "char : '" << c << "'" << std::endl;
	std::cout << "int : " <<static_cast<int>(c) << std::endl;
	std::cout << "float :            " <<static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double " <<static_cast<double>(c) << ".0" << std::endl;
}

void	ScalarConverter::display_int_message(long int nb)
{
	if (nb == 0)
		std::cout << "char :		 Non displayable" << std::endl;
	else if ((nb > 0 && nb <= 127) && std::isprint(nb))
		std::cout << "char :         '"<< static_cast<char>(nb) << "'" << std::endl;
	else
		std::cout << "char :		impossible" << std::endl;
	if (nb > INT_MAX || nb < INT_MIN)
		std::cout << "int :		impossible" << std::endl;
	else
		std::cout << "int :            "<< nb << std::endl;
	std::cout << "float :	         "<< static_cast<float>(nb) << ".0f" << std::endl;
	std::cout << "double :	 "<< static_cast<double>(nb) << ".0" << std::endl;
}

void	ScalarConverter::display_float_message(float f)
{
	std::cout << "char :		'*'" << std::endl;
	if (f < static_cast<float>(INT_MIN)>(f) || f > static_cast<float>(INT_MAX)>(f))
		std::cout << "int :		 impossible" << std::endl;
	else
		std::cout << "int :           "<< static_cast<int>(f) << std::endl;
	std::cout << "float :	        "<< static_cast<float>(f) << ".0f" << std::endl;
	std::cout << "double :	"<< static_cast<double>(f) << ".0" << std::endl;
}

void	ScalarConverter::display_double_message(double d)
{
	if ((d >= 0 && d <= 127) && std::isprint(d))
		std::cout << "char :         '"<< static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "char :		impossible" << std::endl;
	if (d < static_cast<float>(INT_MIN)>(d) || d > static_cast<float>(INT_MAX)>(d))
		std::cout << "int :		impossible" << std::endl;
	else
	 	std::cout << "int :          "<< static_cast<int>(d) << std::endl;
	std::cout << "float :	       "<< static_cast<float>(d) << ".0f" << std::endl;
	std::cout << "double :       "<< d << ".0" << std::endl;
}

void ScalarConverter::display_nan_message()
{
	std::cout << "char :		impossible" << std::endl;
	std::cout << "int :		impossible" << std::endl;
	std::cout << "float :	        nanf" << std::endl;
	std::cout << "double :	nan" << std::endl;
}

void ScalarConverter::display_p_inf_message()
{
	std::cout << "char :		impossible" << std::endl;
	std::cout << "int :		impossible" << std::endl;
	std::cout << "float :	+inff" << std::endl;
	std::cout << "double :	+inf" << std::endl;
}
void ScalarConverter::display_n_inf_message()
{
	std::cout << "char :		impossible" << std::endl;
	std::cout << "int :		impossible" << std::endl;
	std::cout << "float :	-inff" << std::endl;
	std::cout << "double :	-inf" << std::endl;
}
