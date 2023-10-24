/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:19:31 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/24 14:15:54 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/PhoneBook.hpp"

/**
 * @brief Default constructor for the PhoneBook class.
 *
 * This constructor creates an instance of the PhoneBook class
 * without any specific initialization.
 * It's used when a PhoneBook object is instantiated
 * without providing any initial data.
 */
PhoneBook::PhoneBook() {};

/**
 * @brief Check if a string contains only digits.
 *
 * This static method checks if the provided string consists of
 * only numeric digits (0-9).
 *
 * @param command The string to be checked.
 * @return 0 if the string contains only digits, 1 if it
 * contains non-digit characters.
 */
static int	CheckIfOnlyDigit(std::string command)
{
	for (size_t i = 0; i < command.size(); i++)
	{
		if (!isdigit(command[i]))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * @brief Handle and display contact information in a formatted manner.
 *
 * This method takes a piece of contact information and ensures that it is displayed
 * within a fixed width of 10 characters. If the provided information is longer than
 * 10 characters, it is truncated to fit within that width and an ellipsis ('.') is added.
 *
 * @param info The contact information to be formatted and displayed.
 */
void	PhoneBook::HandleInfoContacts(std::string info)
{
	if (info.size() > 10)
	{
		info.resize(9);
		info.append(".");
	}
	std::cout << std::setw(10) << info << "|";
}

/**
 * @brief Add a contact to the PhoneBook.
 *
 * This method adds a new contact to the PhoneBook at the specified position
 * indicated by 'counter'. It fills the contact's information interactively
 * by prompting the user.
 *
 * @param counter The position at which to add the contact in the PhoneBook.
 */
void	PhoneBook::AddContact(int counter)
{
	Contacts[counter].FillContact();
}

/**
 * @brief Display a list of contacts in a tabular format.
 *
 * This method displays a list of contacts from the PhoneBook in a
 * tabular format, showing the index, first name, last name,
 * and nickname of each contact.
 *
 * @param size The number of contacts to display.
 */
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

/**
 * @brief Search and display contact details by index.
 *
 * This method allows the user to search for and display the details of a
 * contact by providing an index. It interacts with the user to receive index
 * input, checks for valid input, and displays contact information if the input
 * is valid or exists.
 *
 * @param size The total number of contacts in the PhoneBook.
 */
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
		{
			system("clear");
			break;
		}
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


