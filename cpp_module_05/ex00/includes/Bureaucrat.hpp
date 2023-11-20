/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:28:38 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/20 11:45:56 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string const name;
		int	grade;
	public:
		/* Orthodox Canonical Form */
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat	&operator=(Bureaucrat const &copy);
		/* ----------------------------------------- */
		Bureaucrat(std::string _name, int _grade);
		std::string	getName() const;
		int	getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &copy);

#endif
