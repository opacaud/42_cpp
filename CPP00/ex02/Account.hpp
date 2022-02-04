// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#pragma once
#ifndef ACCOUNT_HPP

# define ACCOUNT_HPP

# define RESET  		"\033[0m"
# define BLACK  		"\033[30m"			/* Black */
# define RED    		"\033[31m"			/* Red */
# define GREEN  		"\033[32m"			/* Green */
# define YELLOW 		"\033[33m"			/* Yellow */
# define BLUE   		"\033[34m"			/* Blue */
# define MAGENTA		"\033[35m"			/* Magenta */
# define CYAN   		"\033[36m"			/* Cyan */
# define WHITE  		"\033[37m"			/* White */
# define BOLDBLACK  	"\033[1m\033[30m"	/* Bold Black */
# define BOLDRED    	"\033[1m\033[31m"	/* Bold Red */
# define BOLDGREEN  	"\033[1m\033[32m"	/* Bold Green */
# define BOLDYELLOW 	"\033[1m\033[33m"	/* Bold Yellow */
# define BOLDBLUE   	"\033[1m\033[34m"	/* Bold Blue */
# define BOLDMAGENTA	"\033[1m\033[35m"	/* Bold Magenta */
# define BOLDCYAN   	"\033[1m\033[36m"	/* Bold Cyan */
# define BOLDWHITE  	"\033[1m\033[37m"	/* Bold White */

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account
{
	public:

		typedef Account		t;

		Account( int initial_deposit );
		~Account( void );

		static int	getNbAccounts( void );
		static int	getTotalAmount( void );
		static int	getNbDeposits( void );
		static int	getNbWithdrawals( void );
		static void	displayAccountsInfos( void );

		void		makeDeposit( int deposit );
		bool		makeWithdrawal( int withdrawal );
		int			checkAmount( void ) const;
		void		displayStatus( void ) const;

	private:

		static int	_nbAccounts;
		static int	_totalAmount;
		static int	_totalNbDeposits;
		static int	_totalNbWithdrawals;

		static void	_displayTimestamp( void );

		int			_accountIndex;
		int			_amount;
		int			_nbDeposits;
		int			_nbWithdrawals;

		Account( void );
};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif
