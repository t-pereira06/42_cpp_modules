/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:36:29 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/09 15:01:16 by tsodre-p         ###   ########.fr       */
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

	counter = 0;
	while (1)
	{
		system("clear");
		std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
		//std::cin >> command;
		if (!getline(std::cin, command))
		{
			std::cout << "ERROR";
			exit(1);
		}
		if (counter == 8)
			counter = 0;
		if (command == "ADD")
		{
			system("clear");
			phonebook.AddContact(counter);
			counter++;
		}
		if (command == "SEARCH")
		{
			phonebook.DisplayContacts();
		}
		/* else if (command == "SEARCH")
		{
		} */
		else if (command == "EXIT")
			exit(0);
	}
	return (0);
}
