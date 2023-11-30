/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:23:08 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/30 10:04:43 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

int	main(void)
{
	Data	data;
	data.number = 453;

	std::cout << "Data address: " << &data << std::endl;
	std::cout << "Data number: " << data.number << std::endl;
	std::cout << std::endl;
	std::cout << "Serializing:" << std::endl;
	uintptr_t	ptr = Serializer::serialize(&data);
	std::cout << "Serialized uintptr: " << ptr << std::endl;
	std::cout << std::endl;
	std::cout << "Deserializing:" << std::endl;
	Data	*convertion = Serializer::deserialize(ptr);
	std::cout << "Deserialized address: " << convertion << std::endl;
	std::cout << "Deserialized data number: " << convertion->number << std::endl;
}
