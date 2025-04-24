/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactFunc.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:33:42 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/24 09:51:59 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "Utils/Utils.hpp"
#include <iomanip>

void	Contact::func( void )
{
	std::cout << BLUE << "func called" << RESET << std::endl;
	return ;
}


bool	Contact::SetFristName( void )
{
	std::string str;

	if (!Utils::SafeGetLine(str, "Frist Name : ", "Empty line write again."))
		return false;
	this->_FirstName = str;
	return true;
}


bool	Contact::SetLastName( void )
{
	if (!Utils::SafeGetLine(this->_LastName, "Last Name : ", "Empty line write again."))
		return false;
	return true;
}


bool	Contact::SetNickName( void )
{
	if (!Utils::SafeGetLine(this->_NickName, "Nick Name : ", "Empty line write again."))
		return false;
	return true;
}


bool	Contact::SetPhoneNumber( void )
{
	if (!Utils::SafeGetLine(this->_PhoneNumber, "Phone Number : ", "Empty line write again."))
		return false;
	return true;
}


bool	Contact::SetDarkestSecret( void )
{
	if (!Utils::SafeGetLine(this->_DarkestSecret, "Darkest Secret : ", "Empty line write again.(you will tell me..)"))
		return false;
	return true;
}


bool	Contact::SetNewContact( void )
{
	std::cout << BLUE << "SetNewContact called" << std::endl;

	if (this->SetFristName() == false){
		return (false);
	}if (this->SetLastName() == false){
		return (false);
	}if (this->SetNickName() == false){
		return (false);
	}if (this->SetPhoneNumber() == false){
		return (false);
	}if (this->SetDarkestSecret() == false)
		return (false);

	return true;
}


void	Contact::FormatAndPut(std::string str)
{
	std::string tmp;
	int len = str.length();
	if (len > 10)
	{
		tmp = str.substr(0, 9);
		tmp.resize(10, '.');
	}
	else
		tmp = str;

	std::cout << "|" << std::right << std::setw(10) << tmp ;
}


void Contact::PutContact( int index )
{
	std::cout << "|" ;
	std::cout << index + 1;
	Contact::FormatAndPut(this->_FirstName);
	Contact::FormatAndPut(this->_LastName);
	Contact::FormatAndPut(this->_NickName);
	std::cout << "|" << std::endl;
}


void Contact::PutDataContact( int index )
{
	std::cout << std::endl;
	std::cout << "| " << index + 1;
	std::cout << " | " << this->_FirstName;
	std::cout << " | " << this->_LastName;
	std::cout << " | " << this->_NickName;
	std::cout << " | " << this->_PhoneNumber;
	std::cout << " | " << this->_DarkestSecret;
	std::cout << " |" << std::endl;
	std::cout << std::endl;
}
