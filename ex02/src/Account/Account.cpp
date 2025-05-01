/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:03:32 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/01 11:16:15 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime> // for std::time, std::localtime

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"



int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*---------------constructor-------------destructor----------------*/

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

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:"<< this->_amount
				<< ";closed" << std::endl;
	return ;
}


/*---------------constructor-------------destructor----------------*/


/*----------------------display----------------------*/

//[19920104_091532]

void Account::_displayTimestamp( void )
{
	std::time_t t = std::time(NULL);
	std::tm* now = std::localtime(&t);

	std::cout	<< "[" << (now->tm_year + 1900)
				<< std::setw(2) << std::setfill('0') << now->tm_mon + 1
				<< std::setw(2) << std::setfill('0') << now->tm_mday << "_"
				<< std::setw(2) << std::setfill('0') << now->tm_hour
				<< std::setw(2) << std::setfill('0') << now->tm_min
				<< std::setw(2) << std::setfill('0') << now->tm_sec
				<< "] ";
}

// accounts:8;total:21524;deposits:8;withdrawals:0

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << Account::_nbAccounts
				<< ";total:"<< Account::_totalAmount
				<< ";deposits:" << Account::_totalNbDeposits
				<< ";withdrawals:" << Account::_totalNbWithdrawals
				<< std::endl;
}

// index:0;amount:47;deposits:1;withdrawals:0

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:"<< this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}


/*----------------------display----------------------*/


//[19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";p_amount:"<< this->_amount
				<< ";deposit:" << deposit
				<< ";amount:" << this->_amount + deposit
				<< ";nb_deposits:" << this->_nbDeposits
				<< std::endl;

	this->_amount += deposit;
	Account::_totalAmount += deposit;
}


// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";p_amount:"<< this->_amount;

	if (this->_amount < withdrawal){
		std::cout	<< ";withdrawal:refused"<< std::endl;
		return false;
	}else{
		this->_nbWithdrawals++;
		std::cout	<< ";withdrawal:" << withdrawal
					<< ";amount:" << this->_amount - withdrawal
					<< ";nb_withdrawals:" << this->_nbWithdrawals
					<< std::endl;
	}
	_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return true;
}
