/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:36:29 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/11 15:56:31 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/PhoneBook.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	PhoneBook phonebook;
	std::string	command;
	int	counter;
	int	size;

	counter = 0;
	size = 0;
	while (1)
	{
		system("clear");
		std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
		if (!getline(std::cin, command))
		{
			std::cout << "ERROR\n";
			exit(1);
		}
		if (counter == 8)
			counter = 0;
		if (command == "ADD")
		{
			system("clear");
			std::cout << "New contact :\n";
			phonebook.AddContact(counter);
			if (size < 8)
				size++;
			counter++;
		}
		else if (command == "SEARCH")
		{
			system("clear");
			phonebook.DisplayContacts(size);
			std::cout << "Write BACK to go to main menu\n" << "Entry the index of the contact: ";
			phonebook.SearchIndexContact(size);
		}
		else if (command == "EXIT")
			exit(0);
	}
	return (0);
}
