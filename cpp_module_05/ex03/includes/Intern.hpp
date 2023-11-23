/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:11:02 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/23 15:28:50 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
	public:
		/* Orthodox Canonical Form */
		Intern();
		virtual ~Intern();
		Intern(Intern const &copy);
		Intern	&operator=(Intern const &copy);
		/* ----------------------------------------- */
		AForm	*makeForm(std::string _formName, std::string _target);
};

#endif
