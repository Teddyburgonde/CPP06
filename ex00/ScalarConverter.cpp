/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:25:13 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/01 12:55:16 by tebandam         ###   ########.fr       */
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
/*
		static void	is_inf(std::string str);

*/


void ScalarConverter::convert(std::string const &input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if (ScalarConverter::is_char(input))
		{
			ScalarConverter::display_char_message(input[i]);
			break; 
		}
		else if (ScalarConverter::is_int(input))
		{
			std::cout << "IS_INT , value de input: " << input[i] << std::endl;
			ScalarConverter::display_int_message(input[i]);
			break; 
		}
		else if (ScalarConverter::is_float(input))
		{
			
			ScalarConverter::display_float_message(input[i]);
			break; 
		}
		else if (ScalarConverter::is_double(input))
		{
			ScalarConverter::display_double_message(input[i]);
			break;
		}
		i++;
	}
}






/* Functions detection type */
bool ScalarConverter::is_char(std::string const &input)
{
	if (input.size() == 1 && std::isprint(input[0]))
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
	std::cout << "Value in float :" <<static_cast<float>(c) << "f." << std::endl;
	std::cout << "Value in double " <<static_cast<double>(c) << ".0" << std::endl;
}

void	ScalarConverter::display_int_message(long int nb)
{
	if (nb > INT_MAX || nb < INT_MIN)
		std::cout << "Value in int :		impossible" << std::endl;
	else if (!std::isdigit(nb))
		std::cout << "Value in char :		impossible" << std::endl;
	std::cout << "Value in char :		impossible" << std::endl;
	std::cout << "Value in int :          "<< nb << std::endl;
	std::cout << "Value in float :	"<< static_cast<float>(nb) << "f" << std::endl;
	std::cout << "Value in double :	"<< static_cast<double>(nb) << ".0" << std::endl;
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
	std::cout << "Value in double :	"<< static_cast<double>(f) << ".0" << std::endl;
}

void	ScalarConverter::display_double_message(double d)
{
	if ((d < 0 && d > 127) || !std::isprint(d))
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
	std::cout << "Value in char :		impossible." << std::endl;
	std::cout << "Value in int :		impossible." << std::endl;
	std::cout << "Value in float :	nanf." << std::endl;
	std::cout << "Value in double :	nan." << std::endl;
}


// void ScalarConverter::convert(std::string const &literal)
// {
// }

/*
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
*/