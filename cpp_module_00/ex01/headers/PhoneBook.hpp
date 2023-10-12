/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:29:51 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/12 12:22:31 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <locale>
#include <stdio.h>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact Contacts[8];

	public:
		PhoneBook();
		void	AddContact(int counter);
		void	DisplayContacts(int size);
		void	HandleInfoContacts(std::string info);
		void	SearchIndexContact(int size);
};

#endif
