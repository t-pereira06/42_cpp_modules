/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:48:10 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/13 11:51:19 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		/* Orthodox Canonical Form */
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const &copy);
		WrongCat	&operator=(WrongCat const &copy);
		/* ----------------------------------------- */
		void	makeSound() const;
};

#endif
