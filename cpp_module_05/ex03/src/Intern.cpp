/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:11:12 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/23 16:31:13 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

/*Orthodox Canonical Form*/
Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const &copy)
{
	(void)(copy);
}

Intern	&Intern::operator=(Intern const &copy)
{
	(void)(copy);
	return (*this);
}
/*-------------------------------------*/

/*Member Functions*/

AForm	*Intern::makeForm(std::string _formName, std::string _target)
{
	int	index = 3;
	std::string	levels[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	for(int	i = 0; i < 3; i++)
		if (levels[i] == _formName)
			index = i;
	switch (index)
	{
		case 0:
			std::cout << "Intern creates RobotomyRequestForm" << std::endl;
			return (new RobotomyRequestForm(_target));
		case 1:
			std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
			return (new ShrubberyCreationForm(_target));
		case 2:
			std::cout << "Intern creates PresidentialPardonForm" << std::endl;
			return (new PresidentialPardonForm(_target));
	}
	std::cout << "Intern could not find form!" << std::endl;
	return (NULL);
}
/*-------------------------------------*/
