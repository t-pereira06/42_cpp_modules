/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:53:08 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/20 16:45:54 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

/*Orthodox Canonical Form*/
Form::Form() : _name("Default"), _signed(false), _signGrade(80), _executeGrade(30)
{
}

Form::~Form()
{
}

Form::Form(Form const &copy) : _name(copy._name), _signed(copy._signed), _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
	if (_signGrade > 150 || _executeGrade > 150)
		throw GradeTooLowException();
	if (_signGrade < 1 || _executeGrade < 1)
		throw GradeTooHighException();
}

Form	&Form::operator=(Form const &copy)
{
	if (this != &copy)
		this->_signed = copy._signed;
	return (*this);
}
/*-------------------------------------*/

/*Member Functions*/
Form::Form(std::string name, int const signGrade, int const executeGrade) : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (_signGrade > 150 || _executeGrade > 150)
		throw GradeTooLowException();
	if (_signGrade < 1 || _executeGrade < 1)
		throw GradeTooHighException();
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	this->_signed = true;
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int Form::getSignGrade() const
{
	return (this->_signGrade);
}

int Form::getExecuteGrade() const
{
	return (this->_executeGrade);
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}
/*-------------------------------------*/

/*Operators*/
std::ostream	&operator<<(std::ostream &output, const Form &copy)
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
