/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:00:48 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/04 10:20:03 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

int	main(void)
{
	Base	*base;
	base = generate();
	std::cout << "Using pointer function:" << std::endl;
	identify(base);
	std::cout << "Using reference function:" << std::endl;
	identify(*base);
}
