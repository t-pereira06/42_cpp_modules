/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:28:38 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/22 11:20:58 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"
# pragma once

class AForm;

class Bureaucrat
{
	private:
		std::string const _name;
		int	_grade;
	public:
		/* Orthodox Canonical Form */
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat	&operator=(Bureaucrat const &copy);
		/* ----------------------------------------- */
		Bureaucrat(std::string name, int grade);
		std::string	getName() const;
		int	getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(AForm &form);
		void	executeForm(AForm const &form);
		class	GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class	GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &copy);

#endif
