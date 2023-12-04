/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:23:08 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/04 09:21:04 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

int	main(void)
{
	Data	data;
	data.number = 10;
	data.string = "Hi, I'm Cracked!";
	data.character = 'C';
	data.truth = true;

	std::cout << "Data address: " << &data << std::endl;
	std::cout << "Data number: " << data.number << std::endl;
	std::cout << "Data string: " << data.string << std::endl;
	std::cout << "Data char: " << data.character << std::endl;
	std::cout << "Data bool: " << data.truth << std::endl;
	std::cout << std::endl;
	std::cout << "Serializing:" << std::endl;
	uintptr_t	ptr = Serializer::serialize(&data);
	std::cout << "Serialized uintptr: " << ptr << std::endl;
	std::cout << std::endl;
	std::cout << "Deserializing:" << std::endl;
	Data	*convertion = Serializer::deserialize(ptr);
	std::cout << "Deserialized address: " << convertion << std::endl;
	std::cout << "Deserialized data number: " << convertion->number << std::endl;
	std::cout << "Deserialized data string: " << convertion->string << std::endl;
	std::cout << "Deserialized data char: " << convertion->character << std::endl;
	std::cout << "Deserialized data bool: " << convertion->truth << std::endl;
}
