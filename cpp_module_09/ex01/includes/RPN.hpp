/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:25:52 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/20 17:26:25 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <cmath>
#include <stack>


class RPN
{
	private:
		std::stack<int>	stack;
	public:
		/* Orthodox Canonical Form */
		RPN();
		~RPN();
		RPN(RPN const &copy);
		RPN	&operator=(RPN const &copy);
		/* ----------------------- */
		void	checkArgs(char **args, int argc);
		int		checkIfOnlyDigits(std::string arg);
};

#endif
