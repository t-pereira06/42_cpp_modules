/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:14:37 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/18 09:16:09 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

template <typename T> void easyfind(const T container, int i)
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
