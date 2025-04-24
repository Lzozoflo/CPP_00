/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookFunc.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:34:50 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/24 10:29:19 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Utils/Utils.hpp"


int	PhoneBook::WhatContact( void )
{
	std::string	Cmd;
	int			index;

	Utils::SafeGetLine(Cmd, "Select an index: ", "Empty line write again.");
	if (Cmd.length() == 1 && isdigit(Cmd[0])) {
		index = Cmd[0] - '0';
		if (index >= 0 && index <= 7) {

				PutDataOfOneContact(index - 1);
				return true;

		} else {

			std::cerr << RED << "\nWrong index\n" << RESET;
			return false;

		}
	} else {

		std::cerr << RED <<"\nWrong index\n"<< RESET;
		return false;

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

	}else if(Cmd == "a"){/////////////////////

		return (1);

	}else if(Cmd == "s"){/////////////////////

		return (2);

	}else if(Cmd == "e"){/////////////////////

		return (3);

	}return (0);
}

