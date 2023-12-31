/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:28:28 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/22 15:11:47 by tsodre-p         ###   ########.fr       */
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

void	Bureaucrat::signForm(AForm &form)
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

void	Bureaucrat::executeForm(AForm const &form)
{
	if (this->getGrade() > form.getExecuteGrade())
		std::cout << "Couldn't sign " << form.getName() << " because grade is too low!" << std::endl;
	if (!form.getSigned())
		std::cout << "Couldn't sign " << form.getName() << " because it is not signed!" << std::endl;
	else
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << "!" << std::endl;
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
