/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:36:29 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/04 12:04:23 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	display_contacts(Phonebook phonebook)
{
	for(int	i = 0; i < 8; i++)
	{
		if (phonebook.Contacts[i].FirstName.size() < 10);
			while (phonebook.Contacts[i].FirstName.size() < 10)
				phonebook.Contacts[i].FirstName.append(" ");
		if (phonebook.Contacts[i].LastName.size() < 10);
			while (phonebook.Contacts[i].LastName.size() < 10)
				phonebook.Contacts[i].LastName.append(" ");
		if (phonebook.Contacts[i].Nickname.size() < 10);
			while (phonebook.Contacts[i].Nickname.size() < 10)
				phonebook.Contacts[i].Nickname.append(" ");
	}
	for(int j = 0; j < 8; j++)
	{
		std::cout << j + 1;
		if (phonebook.Contacts[j].FirstName.size() > 10);
			while (phonebook.Contacts[j].FirstName.size() > 10)
				phonebook.Contacts[j].FirstName.append(" ");
		if (phonebook.Contacts[j].LastName.size() > 10);
			while (phonebook.Contacts[j].LastName.size() > 10)
				phonebook.Contacts[j].LastName.append(" ");
		if (phonebook.Contacts[j].Nickname.size() > 10)
		{
			for(int	i = 0; i < 9; i++)
				std::cout << phonebook.Contacts[j].Nickname[i];
			std::cout << "." << std::endl;
		}
	}
}
void	search_contact(Phonebook phonebook)
{

	exit (0);
}
void	add_contact(int counter, Phonebook phonebook)
{
	system("clear");
	std::cout << "First Name:" << std::endl;
	std::cin >> phonebook.Contacts[counter].FirstName;
	system("clear");
	std::cout << "Last Name:" << std::endl;
	std::cin >> phonebook.Contacts[counter].LastName;
	system("clear");
	std::cout << "Nickname:" << std::endl;
	std::cin >> phonebook.Contacts[counter].Nickname;
	system("clear");
	std::cout << "Phone Number:" << std::endl;
	std::cin >> phonebook.Contacts[counter].PhoneNumber;
	system("clear");
	std::cout << "Darkest Secret:" << std::endl;
	std::cin >> phonebook.Contacts[counter].DarkestSecret;
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
			add_contact(counter, phonebook);
			counter++;
		}
		/* else if (command == "SEARCH")
		{
			search_contact(phonebook);
			counter++;
		} */
		else if (command == "EXIT")
			exit(0);
	}
	/* std::cout << contact1.FirstName << std::endl;
	std::cout << contact1.LastName << std::endl;
	std::cout << contact1.PhoneNumber << std::endl;
	std::cout << contact1.DarkestSecret << std::endl; */
	return (0);
}
