/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:25:58 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/21 14:30:27 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

/* Orthodox Canonical Form */
RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const &copy) : stack(copy.stack) {}

RPN	&RPN::operator=(RPN const &copy)
{
	if (this != &copy)
		this->stack = copy.stack;
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
			throw std::runtime_error("Error");
	}
}

void	RPN::operation(char arg)
{
	if (this->stack.size() < 2)
		throw std::runtime_error("Not enough numbers to execute an operation.");
	int num1;
	int num2;
	int result;
	num2 = stack.top();
	stack.pop();
	num1 = stack.top();
	stack.pop();
	//4 - Push the result back onto the stack.
	switch (arg)
	{
		case ('+') :
		{
			result = num1 + num2;
			this->stack.push(result);
			break;
		}
		case ('-') :
		{
			result = num1 - num2;
			this->stack.push(result);
			break;
		}
		case ('*') :
		{
			result = num1 * num2;
			this->stack.push(result);
			break;
		}
		case ('/') :
		{
			result = num1 / num2;
			this->stack.push(result);
			break;
		}
	}
}

void	RPN::execute(std::string arg)
{
	std::string	number;
	//1 - Iterate through each token in the RPN expression from left to right.
	for (size_t i = 0; i < arg.size(); i++)
	{
		if (arg[i] == ' ')
			continue;
		/*2 -If the token is an operator, pop the required number of operands from the stack
		(usually two for binary operators) and perform the operation.*/
		else if (arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/')
			operation(arg[i]);
		//3 - If the token is an operand, push it onto the stack.
		else
		{
			number = arg[i];
			this->stack.push(atof(number.c_str()));
		}
	}
	//5 - After processing all tokens, the result should be at the top of the stack.
	if (this->stack.size() > 1)
		throw std::runtime_error("Not enough operators.");
	//6 - Pop it and return the result
	std::cout << this->stack.top() << std::endl;
	stack.pop();
}
/* ----------------------------------------------------------- */
