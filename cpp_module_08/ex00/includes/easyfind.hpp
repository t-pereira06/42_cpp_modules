/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:10:17 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/13 15:01:32 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <iterator>

template <typename T> void easyfind(const T &container, int i)
{
	int	distance;
	if (std::find(container.begin(), container.end(), i) != container.end())
	{
		distance = std::distance(container.begin(), std::find(container.begin(), container.end(), i));
		std::cout << "Found " << i << " in position " << distance << std::endl;
		return ;
	}
	std::cout << "Value not found!" << std::endl;
}

#endif
