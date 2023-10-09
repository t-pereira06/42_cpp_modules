/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:16:31 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/09 10:49:48 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <locale>
#include <stdio.h>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;

	public:
		std::string GetFirstName();
		std::string GetLastName();
		std::string GetNickName();
		std::string GetPhoneNumber();
		std::string GetDarkestSecret();
		std::string	FillContact();
		std::string	GetInput(std::string output);
		std::string	GetInfo(std::string type);
};

#endif
