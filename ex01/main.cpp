/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:11:43 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/02 11:42:53 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*Serialization and Deserialization */ 
int	main()
{
	t_data data;
	t_data* deserializedData;
	uintptr_t serializez;

	data.nb = 10;
	data.str = "salut";

	
	serializez = Serializer::serialize(&data);
	if (!serializez)
		return 1;
	deserializedData = Serializer::deserialize(serializez);
	
	std::cout << "Value serializez adress: " << deserializedData << std::endl;
	std::cout << "Value  deserializedData->nb: " << deserializedData->nb << std::endl;
	std::cout << "Value deserializedData->str: " << deserializedData->str << std::endl;
	std::cout << std::endl;
	std::cout << "Value data adress : " << &data << std::endl;
	std::cout << "Value  data.nb: " << data.nb << std::endl;
	std::cout << "Value data.str: " << data.str << std::endl;

	std::cout << std::endl;
	if (deserializedData == &data)
    	std::cout << "Deserialization successful!" << std::endl;
	else 
    	std::cout << "Deserialization failed." << std::endl;
}