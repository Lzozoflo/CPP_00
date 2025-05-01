/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UtilsFunc.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:33:42 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/07 17:08:18 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Utils.hpp"


/*---------------constructor-------------destructor----------------*/


Utils::Utils( void )
{
	std::cout << BLUE << "Constructor Utils called" << RESET << std::endl;
	return ;
}


Utils::~Utils( void )
{
	std::cout << YELLOW << "Destructor Utils called" << RESET << std::endl;
	return ;
}


/*---------------constructor-------------destructor----------------*/


/*----func----*/


bool	Utils::SafeGetLine(std::string& input, const std::string& prompt, const std::string& error)
{

	while (1)
	{
		std::cout << GREEN << prompt << RESET;
		if (!std::getline(std::cin, input)){
			if (std::cin.eof()) {
				std::cerr << RED << "\nDetected EOF (Ctrl+D), EXIT." << RESET << std::endl;
			}else{
				std::cerr << RED << "\nError reading input." << RESET << std::endl;
			}
			return false;
		}
		if (!input.empty()){
			break ;
		}else{
			std::cerr << RED << error << RESET << std::endl;;
		}
	}
	return true;
}


/*----func----*/
