/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:44:52 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/09 15:35:06 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

typedef struct s_data
{
	int nb;
    std::string str;
} t_data;


class Serializer 
{
	public:
		Serializer(Serializer const &cpy);
		Serializer & operator=(Serializer const &rhs);

	public: 
		static uintptr_t serialize(t_data* ptr);
		static t_data* deserialize(uintptr_t raw);

	private:
        Serializer();
		~Serializer();
};

#endif


