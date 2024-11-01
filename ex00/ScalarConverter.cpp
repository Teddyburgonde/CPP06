/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:25:13 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/01 15:54:38 by tebandam         ###   ########.fr       */
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

/* Functions detection type */
bool ScalarConverter::is_char(std::string const &input)
{
	if (input.size() == 1 && std::isprint(input[0]) && !std::isdigit(input[0]))
		return true;
	return false;
}

bool ScalarConverter::is_int(std::string const &input)
{
	int	i;

	if (input.empty()) 
	    return false;
	i = 0;
	if (input[0] == '+' || input[0] == '-')
		i = 1;
	while (input[i])
	{
		if (!isdigit(input[i]))
			return false;
		i++;
	}
	return true;
}

bool ScalarConverter::is_float(std::string const &input)
{
	unsigned long	i;
	int	dot;

	dot = 0;
	i = 0;
	if (input.empty() || input[input.size() - 1] != 'f')
		return false;
	if (input[0] == '+' || input[0] == '-')
		i = 1;
	for (; i < input.size()- 1; i++)
	{
		if (input[i] == '.')
		{
			dot++;
			if (dot > 1)
				return false;
		}
		else if (!isdigit(input[i]))
			return false;
	}
	if (dot == 1)
		return true;
	return false;
}

bool ScalarConverter::is_double(std::string const &input)
{
	unsigned long	i;
	int	dot;

	dot = 0;
	i = 0;
	if (input.empty())
		return false;
	if (input[0] == '+' || input[0] == '-')
		i = 1;
	for (; i < input.size(); i++)
	{
		if (input[i] == '.')
		{
			dot++;
			if (dot > 1)
				return false;
		}
		else if (!isdigit(input[i]))
			return false;
	}
	if (dot == 1)
		return true;
	return false;
}

/* Functions display */

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
