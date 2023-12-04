/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:32:11 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/04 10:20:50 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class Base
{
	public:
		virtual ~Base();
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
