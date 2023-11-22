/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:58:54 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/22 15:00:39 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

/*Orthodox Canonical Form*/
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	this->_targetName = "default";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm(copy), _targetName(copy._targetName)
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
	if (this != &copy)
		this->_targetName = copy._targetName;
	return (*this);
}
/*-------------------------------------*/

/*Constructors*/
PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_targetName = name;
}
/*-------------------------------------*/

/*Member Functions*/
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 25)
		throw GradeTooLowException();
	if (this->getSigned())
		std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
	else
		std::cout << "Cannot execute because Form is not signed!" << std::endl;
}
/*-------------------------------------*/
