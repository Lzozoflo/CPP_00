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

//Constructor Class call
Utils::Utils( void )
{
	std::cout << BLUE << "Constructor Utils called" << RESET << std::endl;
	return ;
}

//Destructor Class call
Utils::~Utils( void )
{
	std::cout << BLUE << "Destructor Utils called" << RESET << std::endl;
	return ;
}
