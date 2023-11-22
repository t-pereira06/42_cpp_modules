/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:58:29 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/22 09:49:04 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_targetName;
	public:
		/* Orthodox Canonical Form */
		PresidentialPardonForm();
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &copy);
		/* ----------------------------------------- */
		PresidentialPardonForm(std::string name);
		void	execute(Bureaucrat const & executor) const;
};

#endif
