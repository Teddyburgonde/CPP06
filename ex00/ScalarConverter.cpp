/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:25:13 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/31 11:50:21 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// string 
// le bon type
// cast
#include "ScalarConverter.hpp"
#include <cctype>

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
/*
		static void	is_char(char c);
		static void	is_int(long int i);
		static void	is_float(float f);
		static void	is_double(double d);
		static void	is_inf(std::string str);
		static void	is_nan();
		static int	check_param(const std::string str);

*/
void	ScalarConverter::is_char(char c)
{
	std::cout << "Value in char : '" << c << "'" << std::endl;
	std::cout << "Value in int : " <<static_cast<int>(c) << std::endl;
	std::cout << "Value in float :" <<static_cast<float>(c) << "f." << std::endl;
	std::cout << "Value in double " <<static_cast<double>(c) << "." << std::endl;
}

void	ScalarConverter::is_int(long int nb)
{
	if (nb > INT_MAX || nb < INT_MIN)
	{
		std::cout << "Value in int :		Impossible." << std::endl;
	}
	else if (!std::isdigit(nb))
	{
		std::cout << "Value in char :		Impossible." << std::endl;
	}
	else
		std::cout << "Value in int : "<< nb << std::endl;
	std::cout << "Value in float :	"<< static_cast<float>(nb) << "f." << std::endl;
	std::cout << "Value in double :	"<< static_cast<double>(nb) << "." << std::endl;
}

void	is_float(float f)
{
	if (f < 0 && f > 127 || !std::isprint(f))
		std::cerr << "Value in char :		Impossible." << std::endl;
	else  
		std::cout << "Value in char :		Impossible." << std::endl;
	if (f < static_cast<float>(INT_MIN)>(f) || f > static_cast<float>(INT_MAX)>(f))
		std::cout << "Value in int :		Impossible." << std::endl;
	else
		std::cout << "Value in int : "<< static_cast<int>(f) << std::endl;
	std::cout << "Value in float :	"<< static_cast<float>(f) << "f." << std::endl;
	std::cout << "Value in double :	"<< static_cast<double>(f) << "." << std::endl;
}

/*
double 2.5`**- To do

  Value in char :		Impossible.
  Value in int :		2.
  Value in float :	2.5f.
  Value in double :	2.5.
*/





void ScalarConverter::is_nan()
{
	std::cout << "Value in char :		Impossible." << std::endl;
	std::cout << "Value in int :		Impossible." << std::endl;
	std::cout << "Value in float :	nanf." << std::endl;
	std::cout << "Value in double :	nan." << std::endl;
}

void ScalarConverter::convert(std::string const &literal)
{
	double doubleValue;
	doubleValue = 0;
	if (!literal[0]) /*Chaine vide*/
	{
		std::cerr << "The string is empty" << std::endl;
		return ;
	}
	/*est ce que c'est un cas special*/
	if (literal.compare("nan") == 0)
	{
		std::cout << "COMPARE NAN" << std::endl;
		doubleValue = 0.0 / 0.0;
		std::cout << "double: "<< doubleValue << std::endl;
	}
	if (literal.compare("-inff") == 0)
	{
		doubleValue = -1.0 / 0.0;
		std::cout << "double: "<< doubleValue << std::endl;
	}
	if (literal.compare("+inff") == 0 || literal.compare("inff") == 0)
	{
		doubleValue = 1.0 / 0.0;
		std::cout << "double: "<< doubleValue << std::endl;
	}
	// if (literal[0] == '0' && literal.length() == 1)
	// {
	// 	std::cout << "COMPARE '0'" << std::endl;
	// 	std::cout << "double: "<< "0.0f" << std::endl;
	// }
	//std::cout << "double: "<< doubleValue << std::endl;
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
		if (literal.compare("nan") == 0)
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
	else if (std::isdigit(literal[0]) || (literal[0] == '-') || (literal[0] == '+'))
	{
		std::cout << "DOUBLE "<< std::endl;
		double doubleValue;

		doubleValue = 0;
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