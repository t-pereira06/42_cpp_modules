/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:25:51 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/16 15:18:40 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>
#include <stdio.h>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/**
 * @brief Constructor for the Account class.
 *
 * This constructor initializes a new bank account
 * with the provided initial deposit.
 *
 * @param initial_deposit The initial deposit amount for the account.
 */
Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

/**
 * @brief Destructor for the Account class.
 *
 * This destructor is responsible for cleaning up resources
 * when an account is closed.
 */
Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

/**
 * @brief Make a deposit into the account.
 *
 * This method allows the account holder
 * to deposit a specified amount into the account.
 *
 * @param deposit The amount to be deposited into the account.
 */
void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount - deposit << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

/**
 * @brief Make a withdrawal from the account.
 *
 * This method allows the account holder to withdraw a specified
 * amount from the account, if the account balance is sufficient.
 * If the withdrawal is allowed, it updates the account information
 * and logs the transaction.
 *
 * @param withdrawal The amount to be withdrawn from the account.
 *
 * @return `false` if the withdrawal is allowed, `true` if the withdrawal
 * is refused due to insufficient funds.
 */
bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal <= Account::_amount)
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_displayTimestamp();
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount + withdrawal << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (false);
	}
	else
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (true);
	}
}

/**
 * @brief Display the status of the account.
 *
 * This method displays the current status of the account,
 * including its index, balance, the number of deposits made
 * and the number of withdrawals made.
 */
void	Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

/**
 * @brief Display information about all accounts.
 *
 * This method displays aggregated information about all accounts,
 * including the total number of accounts, the total amount held
 * across all accounts, the total number of deposits made,
 * and the total number of withdrawals made.
 */
void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

/**
 * @brief Display a timestamp.
 *
 * This private method outputs a timestamp in the format "[YYYYMMDD_HHMMSS] "
 * to indicate the date and time at which a specific action is performed in
 * the account operations.
 */
void	Account::_displayTimestamp()
{
	std::time_t currentTime;
	std::tm *timeInfo;

	currentTime = std::time(NULL);
	timeInfo = std::localtime(&currentTime);

	time(&currentTime);
	timeInfo = localtime(&currentTime);

	std::cout << "[";
	std::cout << timeInfo->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << timeInfo->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << timeInfo->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << timeInfo->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << timeInfo->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << timeInfo->tm_sec;
	std::cout << "] ";
}

/**
 * @brief Get the current account balance.
 *
 * This method returns the current balance of the account.
 *
 * @return The current balance of the account.
 */
int	Account::checkAmount() const
{
	return (this->_amount);
}

/**
 * @brief Get the total number of accounts created.
 *
 * This static method returns the total number of bank accounts that
 * have been created.
 *
 * @return The total number of accounts created.
 */
int	Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

/**
 * @brief Get the total amount held across all accounts.
 *
 * This static method returns the total amount of money held across
 * all bank accounts.
 *
 * @return The total amount held across all accounts.
 */
int	Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

/**
 * @brief Get the total number of deposits made across all accounts.
 *
 * This static method returns the total number of deposits made
 * across all bank accounts.
 *
 * @return The total number of deposits made across all accounts.
 */
int	Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

/**
 * @brief Get the total number of withdrawals made across all accounts.
 *
 * This static method returns the total number of withdrawals made
 * across all bank accounts.
 *
 * @return The total number of withdrawals made across all accounts.
 */
int	Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}
