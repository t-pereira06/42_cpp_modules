/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:25:58 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/21 12:04:21 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

/* Orthodox Canonical Form */
RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const &copy)
{
	while (!stack.empty())
		this->stack.pop();
	this->stack = copy.stack;
}

RPN	&RPN::operator=(RPN const &copy)
{
	if (this != &copy)
	{
		while (!stack.empty())
			this->stack.pop();
		this->stack = copy.stack;
	}
	return (*this);
}
/* ----------------------------------------------------------- */

/* Member Functions */

void	RPN::checkArgs(std::string arg)
{
	for(size_t i = 1; i < arg.size(); i++)
	{
		if (arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/' || arg[i] == ' ')
			continue;
		else if (!isdigit(arg[i]))
		{
			std::cerr << "Error" << std::endl;
			exit(1);
		}
	}
}

void	RPN::operation(std::string arg)
{
	if (this->stack.size() < 2)
	{
		std::cerr << "Not enough numbers to execute an operation." << std::endl;
		exit(1);
	}
	int num1 = stack.pop_back();
}

void	RPN::execute(std::string arg)
{
	//1 - Iterate through each token in the RPN expression from left to right.
	for (size_t i = 0; i < arg.size(); i++)
	{
		//2 - If the token is an operand, push it onto the stack.
		if (arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/' || arg[i] == ' ')
			operation(arg[i]);
		else if
		{
			std::cerr << "Error" << std::endl;
			exit(1);
		}
		/*3 -If the token is an operator, pop the required number of operands from the stack
		(usually two for binary operators) and perform the operation.*/
		//4 - Push the result back onto the stack.
		//5 - After processing all tokens, the result should be at the top of the stack.
		//6 - Pop it and return the result

	}

}
/* ----------------------------------------------------------- */
