/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:41:49 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:50:25 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <algorithm>
# include <limits>
# include <iterator>
# include <stack>
# include <list>

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

template<typename T>
class MutantStack : public std::stack<T>
{
	public :

		MutantStack<T>()
		{
		    // std::cout << BOLDBLUE << "Default constructor for MutantStack called." << RESET << std::endl;
		};

		MutantStack<T>(MutantStack<T> const & MutantStackACopier)
		{
		    // std::cout << BLUE << "Copy constructor for MutantStack called." << RESET << std::endl;
			*this = MutantStackACopier;
		};

		MutantStack<T> & operator=(MutantStack<T> const & MutantStackACopier)
		{
			// std::cout << BLUE << "Assignation operator for Mutantstack called." << RESET << std::endl;
			(void)MutantStackACopier;
			return (*this);
		};

		~MutantStack<T>()
		{
		    // std::cout << BOLDBLUE << "Destructor for MutantStack called." << RESET << std::endl;
		};

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin()
		{
			return (this->c.begin());
		};

		iterator	end()
		{
			return (this->c.end());
		};
};

#endif
