/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:36:29 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/09 16:25:09 by tsodre-p         ###   ########.fr       */
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
		std::cout << "Available commands: ADD, SEARCH, EXIT\n";
		//std::cin >> command;
		if (!getline(std::cin, command))
		{
			std::cout << "ERROR";
			exit(1);
		}
		std::cout << command;
		if (counter == 8)
			counter = 0;
		if (command == "ADD")
		{
			system("clear");
			phonebook.AddContact(counter);
			counter++;
		}
		else if (command == "SEARCH")
		{
			system("clear");
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
