/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 09:42:27 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/31 09:42:27 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <algorithm>
# include <limits>
# include <iterator>

# define RESET          "\033[0m"
# define BLACK          "\033[30m"          /* Black */
# define RED            "\033[31m"          /* Red */
# define GREEN          "\033[32m"          /* Green */
# define YELLOW         "\033[33m"          /* Yellow */
# define BLUE           "\033[34m"          /* Blue */
# define MAGENTA        "\033[35m"          /* Magenta */
# define CYAN           "\033[36m"          /* Cyan */
# define WHITE          "\033[37m"          /* White */
# define BOLDBLACK      "\033[1m\033[30m"   /* Bold Black */
# define BOLDRED        "\033[1m\033[31m"   /* Bold Red */
# define BOLDGREEN      "\033[1m\033[32m"   /* Bold Green */
# define BOLDYELLOW     "\033[1m\033[33m"   /* Bold Yellow */
# define BOLDBLUE       "\033[1m\033[34m"   /* Bold Blue */
# define BOLDMAGENTA    "\033[1m\033[35m"   /* Bold Magenta */
# define BOLDCYAN       "\033[1m\033[36m"   /* Bold Cyan */
# define BOLDWHITE      "\033[1m\033[37m"   /* Bold White */

class SpanFullException : public std::exception
{
	public :
		
		virtual const char *what() const throw()
		{
			return("The span is full.");
		};
};

class NotEnoughNumberException : public std::exception
{
	public :
		
		virtual const char *what() const throw()
		{
			return("There are not enough numbers in container.");
		};
};

class AddingTooManyNumbersException : public std::exception
{
	public :
		
		virtual const char *what() const throw()
		{
			return("You cannot insert that many numbers.");
		};
};

class Span
{
	public :

		Span();
		Span(unsigned int N);
		Span(Span const & SpanACopier);
		~Span();
		Span & operator=(Span const & SpanACopier);

		unsigned int		getN();
		std::vector<int>	getVec();
		std::vector<int>	*getVecAddr();
		void				addNumber(int nb);
		double				shortestSpan();
		double				longestSpan();
		void				addManyNumbers_vec(std::vector<int>::iterator end, unsigned int quantity);
		void				addManyNumbers_insert(std::vector<int> *vec, unsigned int quantity);
	
	private :

		unsigned int		m_N;
		std::vector<int>	m_vec;
};

std::ostream & operator<<(std::ostream &flux, Span & span);

#endif
