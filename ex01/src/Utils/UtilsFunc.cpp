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

#include "Utils.hpp"

#include <iostream>
#include <cstring>
#include <iostream>
#include <string>

int	Utils::VReturn = 0;


bool	Utils::SafeGetLine(std::string& input, const std::string& prompt, const std::string& error)
{

	while (1)
	{
		std::cout << GREEN << prompt << RESET;
		if (!std::getline(std::cin, input)) {

			if (std::cin.eof()) {

				std::cerr << RED << "\nDetected EOF (Ctrl+D), EXIT." << RESET << std::endl;

			} else {

				std::cerr << RED << "\nError reading input." << RESET << std::endl;

			}
			return false;

		}
		if (!input.empty()) {
			break ;
		} else {
			std::cout << RED << error << RESET << std::endl;;
		}
	}
	return true;
}
