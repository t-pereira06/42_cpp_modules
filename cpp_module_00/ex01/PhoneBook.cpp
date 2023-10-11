/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:19:31 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/11 12:59:59 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/PhoneBook.hpp"

PhoneBook::PhoneBook() {};

void	PhoneBook::HandleInfoContacts(std::string info)
{
	if (info.size() > 10)
	{
		info.resize(9);
		info.append(".");
	}
	std::cout << std::setw(10) << info << "|";
}

void	PhoneBook::AddContact(int counter)
{
	Contacts[counter].FillContact();
}

void	PhoneBook::DisplayContacts(int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		std::cout << std::setw(10) << i << "|";
		HandleInfoContacts(Contacts[i].GetInfo("FN"));
		HandleInfoContacts(Contacts[i].GetInfo("LN"));
		HandleInfoContacts(Contacts[i].GetInfo("NN"));
		std::cout << "\n";
		i++;
	}
	std::cout << "\n";
}

void	PhoneBook::SearchIndexContact(int size)
{
	std::string	command;
	int	i;

	i = 0;
	while (1)
	{
		std::cin >> i;
		if (!getline(std::cin, command))
		{
			/* std::cout << "ERROR";
			exit(1); */
			break;
		}
		if (command == "BACK")
			break;
		if (i < 0 || i >= size)
		{
			std::cout << "Index out of the phonebook range!" << "\n";
			continue;
		}
		else
		{
			std::cout << "First Name: " << Contacts[i].GetInfo("FN") << "\n";
			std::cout << "Last Name: " << Contacts[i].GetInfo("LN") << "\n";
			std::cout << "Nickname: " << Contacts[i].GetInfo("NN") << "\n";
			break;
		}
	}
}


