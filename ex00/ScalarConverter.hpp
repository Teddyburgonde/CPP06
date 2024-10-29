/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:13:01 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/29 15:24:58 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARLARCONVERTER_HPP
# define SCARLARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
	public: /*canonical form*/
		ScalarConverter();
		ScalarConverter(ScalarConverter const &cpy);
		ScalarConverter const &operator=(ScalarConverter const &rhs);
		~ScalarConverter();

	public: /*method*/
		static void convert(std::string const &literal);

};

#endif 