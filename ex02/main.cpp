/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:48:49 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/09 18:07:01 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <exception>
#include "time.h"

Base *generate(void)
{
	int	choice = rand() % 3;

	switch (choice)
	{
		case (0): return new A();
		case (1): return new B();
		default: return new C();
	}
}

void identify(Base* p)
{
	if (p == NULL)
	{
        std::cerr << "Null pointer received" << std::endl;
        return;
    }
	if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try 
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Identify Base& A" << std::endl;
		return ;
	} 
	catch (std::exception &e) {}
	try 
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Identify Base& B" << std::endl;
		return ;
	} 
	catch (std::exception &e) {}
	try 
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Identify Base& C" << std::endl;
		return ;
	} 
	catch (std::exception &e) {}
}


int	main()
{	
	srand(time(0));
	Base* obj = generate();
	identify(obj);
	identify(*obj);
	
	delete obj;
}