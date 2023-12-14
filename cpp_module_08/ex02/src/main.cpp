/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:34:05 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/14 16:43:14 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

int main()
{
	{
		std::cout << "Testing with stack" << std::endl << std::endl;
		MutantStack<int> mstack;
		MutantStack<int>::iterator it;
		MutantStack<int>::iterator ite;
		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		it = mstack.begin();
		ite = mstack.end();
		std::cout << "Stack: [ ";
		while (it != ite)
		{
			std::cout << *it << "| ";
			++it;
		}
		std::cout << "]" << std::endl;

		std::cout << "Removing first element" << std::endl;
		mstack.pop();
		it = mstack.begin();
		ite = mstack.end();
		std::cout << "Stack: [ ";
		while (it != ite)
		{
			std::cout << *it << "| ";
			++it;
		}
		std::cout << "]" << std::endl;
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	{
		std::cout << "Testing with list" << std::endl << std::endl;
		std::list<int> list;
		list.push_back(5);
		list.push_back(17);
		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		std::cout << "Stack: [ ";
		while (it != ite)
		{
			std::cout << *it << "| ";
			++it;
		}
		std::cout << "]" << std::endl;

		std::cout << "Removing first element" << std::endl;
		list.pop_back();
		std::list<int>::iterator it2 = list.begin();
		std::list<int>::iterator ite2 = list.end();
		std::cout << "Stack: [ ";
		while (it2 != ite2)
		{
			std::cout << *it2 << "| ";
			++it2;
		}
		std::cout << "]" << std::endl;
	}
	return 0;
}
