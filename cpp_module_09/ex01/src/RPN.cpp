/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:25:58 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/20 17:34:32 by tsodre-p         ###   ########.fr       */
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
int	RPN::checkIfOnlyDigits(std::string arg)
{
	for(size_t i = 0; i < arg.size(); i++)
	{
		if (!isdigit(arg[i]))
			return 0;
	}
	return 1;
}

void	RPN::checkArgs(char **argv, int argc)
{
	for(int i = 1; i < argc; i++)
	{
		if (argv[i][0] == '+' || argv[i][0] == '-' || argv[i][0] == '*' || argv[i][0] == '/')
			continue;
		else if (!checkIfOnlyDigits(argv[i]))
		{
			std::cerr << "Error" << std::endl;
			exit(1);
		}
		else if (atoi(argv[i]) < 0 || atoi(argv[i]) > 10)
		{
			std::cerr << "Error" << std::endl;
			exit(1);
		}
	}
}

/* ----------------------------------------------------------- */
