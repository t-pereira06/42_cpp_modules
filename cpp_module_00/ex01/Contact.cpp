/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:20:11 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/16 14:57:07 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Contact.hpp"

/**
 * @brief Get the first name of the contact.
 * @return The first name of the contact.
 */
std::string	Contact::GetFirstName()
{
	return (FirstName);
}

/**
 * @brief Get the last name of the contact.
 * @return The last name of the contact.
 */
std::string	Contact::GetLastName()
{
	return (LastName);
}

/**
 * @brief Get the nickname of the contact.
 * @return The nickname of the contact.
 */
std::string	Contact::GetNickName()
{
	return (NickName);
}

/**
 * @brief Get the phone number of the contact.
 * @return The phone number of the contact.
 */
std::string	Contact::GetPhoneNumber()
{
	return (PhoneNumber);
}

/**
 * @brief Get the darkest secret of the contact.
 * @return The darkest secret of the contact.
 */
std::string	Contact::GetDarkestSecret()
{
	return (DarkestSecret);
}

/**
 * @brief Get user input with a specified output prompt.
 *
 * This method prompts the user with the specified output message
 * and waits for the user to input a string. It continues to prompt
 * until a non-empty string is provided.
 *
 * @param output The output prompt displayed to the user.
 * @return The user-provided input string.
 */
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

/**
 * @brief Get information of a specific type about the contact.
 *
 * This method allows retrieving specific information about the
 * contact based on the provided type:
 * - "FN" for the first name
 * - "LN" for the last name
 * - "NN" for the nickname
 * - "PN" for the phone number
 * - "DS" for the darkest secret
 *
 * @param type The type of information to retrieve.
 * @return The requested information about the contact or NULL
 * if the type is not recognized.
 */
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

/**
 * @brief Fill the contact information interactively.
 *
 * This method prompts the user to input various pieces of information
 * to fill the contact's details. It requests the first name, last name,
 * nickname, phone number, and darkest secret from the user.
 * The entered information is stored in the respective member variables
 * of the contact object.
 */
void	Contact::FillContact()
{
	FirstName = GetInput("First Name: ");
	LastName = GetInput("Last Name: ");
	NickName = GetInput("Nickname: ");
	PhoneNumber = GetInput("Phone Number: ");
	DarkestSecret = GetInput("Darkest Secret: ");
}
