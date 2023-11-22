/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:59:04 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/22 10:43:16 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

/*Orthodox Canonical Form*/
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->_targetName = "default";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : AForm(copy), _targetName(copy._targetName)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
	if (this != &copy)
		this->_targetName = copy._targetName;
	return (*this);
}
/*-------------------------------------*/

/*Constructors*/
RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_targetName = name;
}
/*-------------------------------------*/

/*Member Functions*/
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 72)
		throw GradeTooLowException();
	if (this->getSigned())
	{
		int	randNumber;
		srand (time(NULL));
		randNumber = rand() % 2;
		std::cout << "Bzzzzzzzzzzzzzzzzzzzzzzzzz" << std::endl;
		if (randNumber == 1)
			std::cout << executor.getName() << "has been robotomized!" << std::endl;
		else
			std::cout << "Robotomy of " << executor.getName() << "has failed!" << std::endl;
	}
	else
		std::cout << "Cannot execute because Form is not signed!" << std::endl;
}
/*-------------------------------------*/

