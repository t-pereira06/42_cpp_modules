/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:36:29 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/04 15:40:11 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	display_contacts(Phonebook phonebook)
{
	for(int	i = 0; i < 8; i++)
	{
		if (phonebook.Contacts[i].FirstName.size() < 10)
			while (phonebook.Contacts[i].FirstName.size() < 10)
				phonebook.Contacts[i].FirstName.append(" ");
		if (phonebook.Contacts[i].LastName.size() < 10)
			while (phonebook.Contacts[i].LastName.size() < 10)
				phonebook.Contacts[i].LastName.append(" ");
		if (phonebook.Contacts[i].Nickname.size() < 10)
			while (phonebook.Contacts[i].Nickname.size() < 10)
				phonebook.Contacts[i].Nickname.append(" ");
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
		if (phonebook.Contacts[i].Nickname.size() > 10)
		{
			for(int	j = 0; j < 9; j++)
				std::cout << phonebook.Contacts[i].Nickname[j];
			std::cout << ".";
		}
		std::cout << "|" << std::endl;
	}
}
/* void	search_contact(Phonebook phonebook)
{
	exit (0);
} */
void	add_contact(int counter, Phonebook phonebook)
{
	std::string	input;

	std::cout << "First Name:" << std::endl;
	getline(std::cin, input);
	phonebook.Contacts[counter].FirstName = input;
	system("clear");
	std::cout << "Last Name:" << std::endl;
	getline(std::cin, input);
	phonebook.Contacts[counter].LastName = input;
	system("clear");
	std::cout << "Nickname:" << std::endl;
	getline(std::cin, input);
	phonebook.Contacts[counter].Nickname = input;
	system("clear");
	std::cout << "Phone Number:" << std::endl;
	getline(std::cin, input);
	phonebook.Contacts[counter].PhoneNumber = input;
	system("clear");
	std::cout << "Darkest Secret:" << std::endl;
	getline(std::cin, input);
	phonebook.Contacts[counter].DarkestSecret = input;
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	Phonebook phonebook;
	std::string	command;
	int	counter;

	counter = 0;
	while (1)
	{
		system("clear");
		std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> command;
		if (counter == 8)
			counter = 0;
		if (command == "ADD")
		{
			system("clear");
			add_contact(counter, phonebook);
			counter++;
		}
		else if (command == "SEARCH")
		{
			display_contacts(phonebook);
			/* search_contact(phonebook); */
		}
		else if (command == "EXIT")
			exit(0);
	}
	/* std::cout << contact1.FirstName << std::endl;
	std::cout << contact1.LastName << std::endl;
	std::cout << contact1.PhoneNumber << std::endl;
	std::cout << contact1.DarkestSecret << std::endl; */
	return (0);
}
