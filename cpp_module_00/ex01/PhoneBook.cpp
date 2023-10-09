/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:19:31 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/09 14:59:48 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/PhoneBook.hpp"

PhoneBook::PhoneBook() {};

void	PhoneBook::AddContact(int counter)
{
	Contacts[counter].FillContact();
}

void	PhoneBook::DisplayContacts()
{
	std::cout << Contacts[0].GetInfo("FN") << std::endl;
	std::cout << Contacts[0].GetInfo("LN") << std::endl;
	std::cout << Contacts[0].GetInfo("NN") << std::endl;
	std::cout << Contacts[0].GetInfo("PN") << std::endl;
	std::cout << Contacts[0].GetInfo("DS") << std::endl;
}

/* void	display_contacts(PhoneBook phonebook)
{
	for(int	i = 0; i < 8; i++)
	{
		if (phonebook.Contacts[i].FirstName.size() < 10)
			while (phonebook.Contacts[i].FirstName.size() < 10)
				phonebook.Contacts[i].FirstName.append(" ");
		if (phonebook.Contacts[i].LastName.size() < 10)
			while (phonebook.Contacts[i].LastName.size() < 10)
				phonebook.Contacts[i].LastName.append(" ");
		if (phonebook.Contacts[i].NickName.size() < 10)
			while (phonebook.Contacts[i].NickName.size() < 10)
				phonebook.Contacts[i].NickName.append(" ");
	}
	for(int i = 0; i < 8; i++)
	{
		std::cout << i + 1;
		if (phonebook.Contacts[i].FirstName.size() > 10)
		{
			for(int	j = 0; j < 9; j++)
				std::cout << phonebook.Contacts[i].FirstName[j];
			std::cout << ".";
			std::cout << "|";
		}
		if (phonebook.Contacts[i].LastName.size() > 10)
		{
			for(int	j = 0; j < 9; j++)
				std::cout << phonebook.Contacts[i].LastName[j];
			std::cout << ".";
			std::cout << "|";
		}
		if (phonebook.Contacts[i].NickName.size() > 10)
		{
			for(int	j = 0; j < 9; j++)
				std::cout << phonebook.Contacts[i].NickName[j];
			std::cout << ".";
		}
		std::cout << "|" << std::endl;
	}
} */
