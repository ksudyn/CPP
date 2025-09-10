/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 20:22:14 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/10 20:32:18 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;


private:
    //En la clase tienes estas variables estáticas
    //Esto significa que todas las cuentas comparten estos valores
    
	static int	_nbAccounts;//cuántas cuentas existen
	static int	_totalAmount;//el dinero total en el banco
	static int	_totalNbDeposits;//el número total de depósitos
	static int	_totalNbWithdrawals;//el número total de retiros

	static void	_displayTimestamp( void );
    //Cada objeto Account tendrá:
	int				_accountIndex;// índice único de la cuenta
	int				_amount;// saldo actual de esa cuenta
	int				_nbDeposits;// depósitos realizados en esa cuenta
	int				_nbWithdrawals;// retiros realizados en esa cuenta

	Account( void );
    //Cada cuenta se comporta como una mini-billetera,
    //pero además reporta sus cambios a los contadores globales
};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */