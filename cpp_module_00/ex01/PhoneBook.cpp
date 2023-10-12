/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:19:31 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/12 12:42:48 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/PhoneBook.hpp"

PhoneBook::PhoneBook() {};

int	CheckIfOnlyDigit(std::string command)
{
	for (int i = 0; i < command.size(); i++)
	{
		if (!isdigit(command[i]))
		{
			return (1);
		}
	}
	return (0);
}
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
	std::cout << "     Index|First Name| Last Name|  Nickname|\n";
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
		if (!getline(std::cin, command))
			break;
		if (command == "BACK")
			break;
		if (command == "EXIT")
			exit(0);
		i = atoi(command.c_str());
		if (CheckIfOnlyDigit(command) == 1)
		{
			std::cout << "\nIndex out of the phonebook range!" << "\n\n";
			std::cout << "Write BACK to go to main menu\n" << "Entry the index of the contact: \n";
			continue;
		}
		else if (i < 0 || i >= size)
		{
			std::cout << "\nIndex out of the phonebook range!" << "\n\n";
			std::cout << "Write BACK to go to main menu\n" << "Entry the index of the contact: \n";
			continue;
		}
		else
		{
			std::cout << "\n";
			std::cout << "First Name: " << Contacts[i].GetInfo("FN") << "\n";
			std::cout << "Last Name: " << Contacts[i].GetInfo("LN") << "\n";
			std::cout << "Nickname: " << Contacts[i].GetInfo("NN") << "\n";
			std::cout << "Phone Number: " << Contacts[i].GetInfo("PN") << "\n";
			std::cout << "Darkest Secret: " << Contacts[i].GetInfo("DS") << "\n\n";
			std::cout << "Write BACK to go to main menu\n" << "Entry the index of the contact: \n";
			continue;
		}
	}
}


