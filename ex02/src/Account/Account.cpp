/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:03:32 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/24 14:35:29 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"


//Constructor Class call
Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:"<< this->_amount
				<< ";created" << std::endl;
	return ;
}

//Destructor Class call
Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:"<< this->_amount
				<< ";closed" << std::endl;
	return ;
}
