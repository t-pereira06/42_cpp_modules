/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:28:28 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/20 14:23:32 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

/* Orthodox Canonical Form */
Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(1)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name)
{
	if (this != &copy)
		this->_grade = copy._grade;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &copy)
{
	if (this != &copy)
		this->_grade = copy._grade;
	return (*this);
}
/*-------------------------------------*/

/*Member Functions*/

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.getSigned())
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	else
	{
		if (this->getGrade() <= form.getSignGrade())
		{
			form.beSigned(*this);
			std::cout << this->getName() << " signed " << form.getName() << std::endl;
		}
		else
		{
			std::cout << this->getName() << " couldn't sign " << form.getName() << " because ";
			throw GradeTooLowException();
		}
	}
}

/*-------------------------------------*/

/*Operators*/
std::ostream	&operator<<(std::ostream &output, const Bureaucrat &copy)
{
	output << copy.getName() << " , bureaucrat grade " << copy.getGrade() << "." << std::endl;
	return (output);
}

/*-------------------------------------*/
