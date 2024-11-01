/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functionsDetectionType.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:23:45 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/01 16:23:48 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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