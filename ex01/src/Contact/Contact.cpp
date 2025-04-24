/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:03:32 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/22 09:24:33 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "Utils/Utils.hpp"

//Constructor Class call
Contact::Contact( void ) : _FirstName("Default"), _LastName("Default"), _NickName("Default"), _PhoneNumber("07.78.80.08.14"), _DarkestSecret("Default")
{
	std::cout << BLUE << "Constructor Contact called" << RESET << std::endl;
	return ;
}

//Destructor Class call
Contact::~Contact( void )
{
	std::cout << BLUE << "Destructor Contact called" << RESET << std::endl;
	return ;
}
