/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:25:13 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/30 12:02:33 by tebandam         ###   ########.fr       */
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
    return (*this);
}

#include <stdio.h>
void ScalarConverter::convert(std::string const &literal)
{
	if (!literal[0]) /*Chaine vide*/
	{
		std::cerr << "The string is empty" << std::endl;
		return ;
	}
	/*c'est un char ?*/
	else if (literal.length() == 1)
	{
		if (!std::isdigit(literal[0]) && literal[0] >= 32 && literal[0] <= 126)
		{
			std::cout << "char: " << "'" << literal[0] << "'" << std::endl;
			return ;
		}
		else
		 	std::cerr << "char: Non displayable" << std::endl;
	}
	/*c'est un int ?*/
	if (std::isdigit(literal[0]) || (literal[0] == '-') || (literal[0] == '+'))
	{
		bool valueNoInt;
		int	value;

		value = 0;
		valueNoInt = 0;
		for(int i = 0; literal[i]; i++)
		{
			if (!std::isdigit(literal[i]))
			{
				valueNoInt = 1;
				break;
			}
		}
		if (valueNoInt == 0)
		{
			value = atoi(literal.c_str());
			if (value > 2147483647 || value < -2147483648)
			{
				std::cerr << "Value not authorized" << std::endl;			
				return ;
			}
			std::cout << "int: "<< literal << std::endl;
		}
	}
	/*c'est un float ?*/
	if ((literal[0] == '0') ||
			(literal[literal.size() - 1] == 'f' && 
			(std::isdigit(literal[0]) || literal[0] == '-' 
			|| literal[0] == '+' || literal[0] == '0')))
	{
		bool valueNoInt;
		float floatValue;

		floatValue = 0;

		valueNoInt = 0;
		if (literal.compare("nanf") == 0)
		{
			floatValue = 0.0 / 0.0;
			std::cout << "float: "<< floatValue << std::endl;
		}
		else if (literal.compare("-inff") == 0)
		{
			floatValue = -1.0 / 0.0;
			std::cout << "float: "<< floatValue << std::endl;
		}
		else if (literal.compare("+inff") == 0 || literal.compare("inff") == 0)
		{
			floatValue = 1.0 / 0.0;
			std::cout << "float: "<< floatValue << std::endl;
		}
		for(unsigned long i = 0; i < literal.size() - 1; i++)
		{
			if (!std::isdigit(literal[i])) /*Attention que cette condition ne bloque pas le reste*/
			{
				valueNoInt = 1;
				break;
			}
		}
		if (literal[0] == '0')
		{
			std::cout << "float: "<< "0.0f" << std::endl;
		}
		else if (valueNoInt == 0)
		{
			std::cout << "float: "<< literal << std::endl;
		}
	}
	if (std::isdigit(literal[0]) || (literal[0] == '-') || (literal[0] == '+'))
	{
		//std::cout << "DOUBLE: "<< literal[0] << std::endl;
		double doubleValue;

		doubleValue = 0;
		if (literal.compare("nanf") == 0)
		{
			doubleValue = 0.0 / 0.0;
			std::cout << "double: "<< doubleValue << std::endl;
		}
		else if (literal.compare("-inff") == 0)
		{
			doubleValue = -1.0 / 0.0;
			std::cout << "double: "<< doubleValue << std::endl;
		}
		else if (literal.compare("+inff") == 0 || literal.compare("inff") == 0)
		{
			doubleValue = 1.0 / 0.0;
			std::cout << "double: "<< doubleValue << std::endl;
		}
		else if (literal[0] == '0' && literal.length() == 1)
		{
			std::cout << "double: "<< "0.0f" << std::endl;
		}
		else
			std::cout << "double: "<< doubleValue << std::endl;
	}
}

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