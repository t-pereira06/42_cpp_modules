/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:11:12 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/23 14:00:19 by tsodre-p         ###   ########.fr       */
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

AForm	*Intern::makeRobotomy(std::string _target)
{
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return (new RobotomyRequestForm(_target));
}

AForm	*Intern::makeShrubbery(std::string _target)
{
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (new ShrubberyCreationForm(_target));
}

AForm	*Intern::makePresidential(std::string _target)
{
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return (new PresidentialPardonForm(_target));
}

AForm	*Intern::makeForm(std::string _formName, std::string _target)
{
	AForm *(Intern::*array[4])(std::string _target) = {&Intern::makeRobotomy, &Intern::makeShrubbery, &Intern::makePresidential};
	std::string	levels[4] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	for(int	i = 0; i < 4; i++)
		if (levels[i] == _formName)
			return ((this->*array[i])(_target));
	std::cout << "Intern could not find form!" << std::endl;
	return (NULL);
}
/*-------------------------------------*/
