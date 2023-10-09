/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:20:11 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/09 14:34:56 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Contact.hpp"

std::string	Contact::GetFirstName()
{
	return (FirstName);
}

std::string	Contact::GetLastName()
{
	return (LastName);
}

std::string	Contact::GetNickName()
{
	return (NickName);
}

std::string	Contact::GetPhoneNumber()
{
	return (PhoneNumber);
}

std::string	Contact::GetDarkestSecret()
{
	return (DarkestSecret);
}

std::string	Contact::GetInput(std::string output)
{
	std::string	value;
	while (value.empty())
	{
		std::cout << output;
		if (!getline(std::cin, value))
		{
			std::cout << "ERROR";
			exit(1);
		}
	}
	return (value);
}

std::string	Contact::GetInfo(std::string type)
{
	if (type == "FN")
		return (GetFirstName());
	if (type == "LN")
		return (GetLastName());
	if (type == "NN")
		return (GetNickName());
	if (type == "PN")
		return (GetPhoneNumber());
	if (type == "DS")
		return (GetDarkestSecret());
	return (NULL);
}

void	Contact::FillContact()
{
	system("clear");
	FirstName = GetInput("First Name: ");
	LastName = GetInput("Last Name: ");
	NickName = GetInput("Nickname: ");
	PhoneNumber = GetInput("Phone Number: ");
	DarkestSecret = GetInput("Darkest Secret: ");
}
