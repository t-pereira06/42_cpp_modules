/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:29:51 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/03 12:50:34 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <locale>
#include <stdio.h>

class Phonebook
{
	public:
		Contact Array[8];
};

class Contact
{
	public:
		std::string FirstName;
		std::string LastName;
		std::string PhoneNumber;
		std::string DarkestSecret;
};

#endif
