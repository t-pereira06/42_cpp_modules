/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:26:05 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/20 17:22:48 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cerr << "Error: No arguments!" << std::endl;
	RPN obj = RPN();
	obj.checkArgs(argv, argc);
	/* Initialize an empty stack.
	1 - Iterate through each token in the RPN expression from left to right.
	2 - If the token is an operand, push it onto the stack.
	3 -If the token is an operator, pop the required number of operands from the stack
	(usually two for binary operators) and perform the operation.
	4 - Push the result back onto the stack.
	5 - After processing all tokens, the result should be at the top of the stack.
	6 - Pop it and return the result. */
	return 0;
}
