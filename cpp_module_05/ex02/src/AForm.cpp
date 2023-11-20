/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:53:08 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/20 17:01:02 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

/*Orthodox Canonical Form*/
AForm::AForm() : _name("Default"), _signed(false), _signGrade(80), _executeGrade(30)
{
}

AForm::~AForm()
{
}

AForm::AForm(AForm const &copy) : _name(copy._name), _signed(copy._signed), _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
	if (_signGrade > 150 || _executeGrade > 150)
		throw GradeTooLowException();
	if (_signGrade < 1 || _executeGrade < 1)
		throw GradeTooHighException();
}

AForm	&AForm::operator=(AForm const &copy)
{
	if (this != &copy)
		this->_signed = copy._signed;
	return (*this);
}
/*-------------------------------------*/

/*Member Functions*/
AForm::AForm(std::string name, int const signGrade, int const executeGrade) : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (_signGrade > 150 || _executeGrade > 150)
		throw GradeTooLowException();
	if (_signGrade < 1 || _executeGrade < 1)
		throw GradeTooHighException();
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	this->_signed = true;
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

int AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int AForm::getExecuteGrade() const
{
	return (this->_executeGrade);
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}
/*-------------------------------------*/

/*Operators*/
std::ostream	&operator<<(std::ostream &output, const AForm &copy)
{
	output << "Form's name: " << copy.getName() << std::endl;
	output << "Sign Grade: " << copy.getSignGrade() << std::endl;
	output << "Execute Grade: " << copy.getExecuteGrade() << std::endl;
	if (copy.getSigned() == 0)
		output << "Signed: No" << std::endl;
	else
		output << "Signed: Yes" << std::endl;
	return (output);
}
/*-------------------------------------*/
