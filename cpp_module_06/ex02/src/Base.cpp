/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:34:59 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/04 10:20:53 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base *generate(void)
{
	int	randNumber;
	srand (time(NULL));
	randNumber = rand() % 3;
	if (randNumber == 0)
	{
		std::cout << "A class created!" << std::endl;
		return (new A());
	}
	if (randNumber == 1)
	{
		std::cout << "B class created!" << std::endl;
		return (new B());
	}
	if (randNumber == 2)
	{
		std::cout << "C class created!" << std::endl;
		return (new C());
	}
	return (NULL);
}

void identify(Base* p)
{
	A* APtr = dynamic_cast<A*>(p);
	B* BPtr = dynamic_cast<B*>(p);
	C* CPtr = dynamic_cast<C*>(p);
	if (APtr)
	{
		std::cout << "P is pointing to A" << std::endl;
		return;
	}
	if (BPtr)
	{
		std::cout << "P is pointing to B" << std::endl;
		return;
	}
	if (CPtr)
	{
		std::cout << "P is pointing to C" << std::endl;
		return;
	}
}

void identify(Base& p)
{
	try
	{
		A& ARef = dynamic_cast<A&>(p);
		(void)ARef;
		std::cout << "P is pointing to A" << std::endl;
	}
	catch(std::exception &e)
	{
	}

	try
	{
		B& BRef = dynamic_cast<B&>(p);
		(void)BRef;
		std::cout << "P is pointing to B" << std::endl;
	}
	catch(std::exception &e)
	{
	}

	try
	{
		C& CRef = dynamic_cast<C&>(p);
		(void)CRef;
		std::cout << "P is pointing to C" << std::endl;
	}
	catch(std::exception &e)
	{
	}
}
