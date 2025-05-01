/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:03:32 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/01 10:24:33 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Utils.hpp"

int PhoneBook::_IndexToWrite = -1;


/*---------------constructor-------------destructor----------------*/


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
			while (VReturn == 2 || !VReturn){
				this->PutAllContact();
				VReturn = this->WhatContact();
			}
			if (VReturn == -1)
				return ;
		}else{
			std::cout << RED << "This is not a Cmd\nCmd available -> ADD, SEARCH, EXIT" << RESET << std::endl;
		}
	}
	return ;
}


PhoneBook::~PhoneBook(void)
{
	std::cout << YELLOW << "Destructor PhoneBook called" << RESET << std::endl;
	return ;
}


/*---------------constructor-------------destructor----------------*/



/*----func----*/


int	PhoneBook::WhatContact( void )
{
	std::string	Cmd;
	int			index;

	if (!Utils::SafeGetLine(Cmd, "Select an index: ", "Empty line write again."))
		return -1;
	if (Cmd.length() == 1 && isdigit(Cmd[0])){
		index = Cmd[0] - '0';
		if (index > 0 && index <= 7){
				PutDataOfOneContact(index - 1);
				return 1;
		}else{
			std::cerr << RED << "Wrong index\n" << RESET;
			return 0;
		}
	}else{
		std::cerr << RED <<"Wrong index\n"<< RESET;
		return 0;
	}
}


void	PhoneBook::PutDataOfOneContact( int index )
{
	_tab[index].PutDataContact(index);
}


void	PhoneBook::PutOneContact( int index )
{
	_tab[index].PutContact(index);
}


void	PhoneBook::PutAllContact( void )
{
	for (int i = 0; i <= 7; i++)
		this->PutOneContact(i);
}


bool	PhoneBook::SetLastContact( void )
{
	std::cout << BLUE << "SetLastContact called" << RESET << std::endl;
	if (_IndexToWrite != 7){
		_IndexToWrite++;
	}else{
		_IndexToWrite = 0;
	}
	if (_tab[_IndexToWrite].SetNewContact() == false)
		return false;
	return true;
}


int	PhoneBook::FindCmd( void )
{
	std::string	Cmd;

	if (!Utils::SafeGetLine(Cmd, "Write a Cmd: ", "Cmd available -> ADD, SEARCH, EXIT")){
		return (-1);
	}else if(Cmd == "ADD"){
		return (1);
	}else if(Cmd == "SEARCH"){
		return (2);
	}else if(Cmd == "EXIT"){
		return (3);
	}return (0);
}


/*----func----*/
