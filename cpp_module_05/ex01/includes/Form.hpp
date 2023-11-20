/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:52:59 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/20 16:46:33 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
# pragma once

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool	_signed;
		int const	_signGrade;
		int const	_executeGrade;
	public:
		/* Orthodox Canonical Form */
		Form();
		~Form();
		Form(Form const &copy);
		Form	&operator=(Form const &copy);
		/* ----------------------------------------- */
		Form(std::string name, int const signGrade, int const executeGrade);
		std::string	getName() const;
		bool	getSigned() const;
		int		getSignGrade() const;
		int		getExecuteGrade() const;
		void	beSigned(Bureaucrat &bureaucrat);
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

std::ostream	&operator<<(std::ostream &output, const Form &copy);

#endif
