/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:28:28 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/16 12:39:55 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

/* Orthodox Canonical Form */
Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(1)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : name(copy.name)
{
	if (this != &copy)
		this->grade = copy.grade;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &copy)
{
	if (this != &copy)
		this->grade = copy.grade;
	return (*this);
}
/*-------------------------------------*/

/*Member Functions*/

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

std::string	Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::incrementGrade()
{
	this->grade--;
	if (grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	this->grade++;
	if (grade > 150)
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

/*-------------------------------------*/

/*Operators*/
std::ostream	&operator<<(std::ostream &output, const Bureaucrat &copy)
{
	output << copy.getName() << " , bureaucrat grade " << copy.getGrade() << "." << std::endl;
	return (output);
}

/*-------------------------------------*/
