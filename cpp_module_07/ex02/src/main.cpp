/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:49:41 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/06 09:56:50 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"
#include "../includes/Array.tpp"

int	main(void)
{
	Array<int>	a(10);
	Array<int>	b(2);

	for (int i = 0; i < 10; i++)
		a[i] = i + 1;
	for (int i = 0; i < 10; i++)
		std::cout << a[i] << ", ";
}
