/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:03:32 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/24 09:51:09 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook/PhoneBook.hpp"
#include "Utils/Utils.hpp"

int PhoneBook::_IndexToWrite = -1;

//Constructor Class call
PhoneBook::PhoneBook(void)
{
	std::cout << BLUE << "Constructor PhoneBook called" << RESET <<  std::endl;
	int		VReturn;

	while (1)
	{

		VReturn = this->FindCmd();

		if (VReturn == -1 || VReturn == 3){

			if (VReturn == 3)
				std::cout << BLUE << "EXIT" << RESET << std::endl;
			return ;

		}else if (VReturn == 1){

			std::cout << BLUE <<"ADD" << RESET << std::endl;
			if (this->SetLastContact() == false)
				return ;

		}else if (VReturn == 2){

			std::cout << BLUE << "SEARCH" << RESET << std::endl;
			this->PutAllContact();
			while (VReturn == 2 || !VReturn){
				VReturn = this->WhatContact();
			}

		}else{
			std::cout << RED << "This is not a Cmd\nCmd available -> ADD, SEARCH, EXIT" << RESET << std::endl;
		}

	}
	return ;
}

//Destructor Class call
PhoneBook::~PhoneBook(void)
{
	std::cout << BLUE << "Destructor PhoneBook called" << RESET << std::endl;
	return ;
}
