/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:25:13 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/31 19:11:10 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// string 
// le bon type
// cast
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
/*
		static void	is_inf(std::string str);
		static int	check_param(const std::string str);

*/
void	ScalarConverter::is_char(char c)
{
	std::cout << "Value in char : '" << c << "'" << std::endl;
	std::cout << "Value in int : " <<static_cast<int>(c) << std::endl;
	std::cout << "Value in float :" <<static_cast<float>(c) << "f." << std::endl;
	std::cout << "Value in double " <<static_cast<double>(c) << ".0" << std::endl;
}

void	ScalarConverter::is_int(long int nb)
{
	if (nb > INT_MAX || nb < INT_MIN)
	{
		std::cout << "Value in int :		impossible" << std::endl;
	}
	else if (!std::isdigit(nb))
	{
		std::cout << "Value in char :		impossible" << std::endl;
	}
	std::cout << "Value in int :          "<< nb << std::endl;
	std::cout << "Value in float :	"<< static_cast<float>(nb) << "f" << std::endl;
	std::cout << "Value in double :	"<< static_cast<double>(nb) << ".0" << std::endl;
}

void	ScalarConverter::is_float(float f)
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

void	ScalarConverter::is_double(double d)
{
	if ((d < 0 && d > 127) || !std::isprint(d))
		std::cout << "Value in char :		impossible" << std::endl;
	if (d < static_cast<float>(INT_MIN)>(d) || d > static_cast<float>(INT_MAX)>(d))
		std::cout << "Value in int :		impossible" << std::endl;
	else
	 	std::cout << "Value in int : "<< static_cast<int>(d) << std::endl;
	std::cout << "Value in float :	"<< static_cast<float>(d) << "f" << std::endl;
	std::cout << "Value in double :	"<< d << std::endl;
}

void ScalarConverter::is_nan()
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