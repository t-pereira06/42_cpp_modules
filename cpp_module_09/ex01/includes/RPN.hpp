/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:25:52 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/20 16:32:07 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <vector>
#include <map>
#include <string.h>

class RPN
{
private:
	/* data */
public:
	/* Orthodox Canonical Form */
	RPN();
	~RPN();
	RPN(RPN const &copy);
	RPN	&operator=(RPN const &copy);
	/* ----------------------- */
};

#endif
