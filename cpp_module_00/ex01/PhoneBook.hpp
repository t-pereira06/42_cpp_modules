/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:29:51 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/09 10:28:33 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <locale>
#include <stdio.h>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact Contacts[8];

	public:
		PhoneBook();
		void	AddContact();
		void	DisplayContacts();
};

#endif
