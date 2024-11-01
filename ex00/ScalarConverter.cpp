/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:25:13 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/01 16:15:31 by tebandam         ###   ########.fr       */
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
	(void)rhs;
    return *this;
}

void ScalarConverter::convert(std::string const &input)
{
	if (ScalarConverter::is_char(input))
		ScalarConverter::display_char_message(input[0]);
	else if (ScalarConverter::is_int(input))
		ScalarConverter::display_int_message(std::atol(input.c_str()));
	else if (ScalarConverter::is_float(input))
		ScalarConverter::display_float_message(std::atof(input.c_str()));
	else if (ScalarConverter::is_double(input))
		ScalarConverter::display_double_message(std::atof(input.c_str()));
	else if (input == "nan" || input == "nanf")
		ScalarConverter::display_nan_message();
	else if (input == "+inf" || input == "+inff")
		ScalarConverter::display_p_inf_message();
	else if(input == "-inf" || input == "-inff")
		ScalarConverter::display_n_inf_message();
	else
	 	std::cout << "Error: bad argument" << std::endl;
}