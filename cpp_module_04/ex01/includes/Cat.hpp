/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:44:58 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/13 15:14:47 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	brain;
	public:
		/* Orthodox Canonical Form */
		Cat();
		~Cat();
		Cat(Cat const &copy);
		Cat	&operator=(Cat const &copy);
		/* ----------------------------------------- */
		void	makeSound() const;
		Brain*	getBrain();
};

#endif
