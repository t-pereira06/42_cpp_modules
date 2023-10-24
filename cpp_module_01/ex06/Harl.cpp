/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:47:26 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/24 17:26:25 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese";
	std::cout << "-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void(Harl::*array[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"debug", "info", "warning", "error"};
	for(int	i = 0; i < 4; i++)
		if (levels[i] == level)
			(this->*array[i])();
}

void	Harl::filter(std::string level)
{
	int	levelNum = -1;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			levelNum = i;
			break;
		}
	}
	switch(levelNum)
	{
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			this->complain("debug");
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			this->complain("info");
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			complain("warning");
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			complain("error");
			std::cout << std::endl;
	}
}
