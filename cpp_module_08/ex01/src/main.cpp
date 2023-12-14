/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:29:03 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/14 15:27:19 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

/* int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
} */

int	main (void)
{
	try
	{
		Span sp = Span(5);

		/*sp.addNumber(32);
		sp.addNumber(71);
		sp.addNumber(12);
		sp.addNumber(45);*/
		sp.generateRandomNumbers(5);
		sp.printVector();
		std::cout << "The longest span is " << sp.longestSpan() << std::endl;
		std::cout << "The shortest span is " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
