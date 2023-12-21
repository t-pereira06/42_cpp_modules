/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:25:52 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/21 12:00:38 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <cmath>
#include <stack>
#include <stdio.h>
#include <string.h>

class RPN
{
	private:
		std::stack<int>	stack;
		char	**splittedArg;
	public:
		/* Orthodox Canonical Form */
		RPN();
		~RPN();
		RPN(RPN const &copy);
		RPN	&operator=(RPN const &copy);
		/* ----------------------- */
		RPN(const char *arg);
		void	checkArgs(std::string arg);
		void	execute(std::string arg);
		void	operation(std::string arg);
};

#endif
