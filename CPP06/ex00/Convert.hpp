/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:20:16 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:50:25 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <limits>
# include "check.hpp"
# include "utils.hpp"

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

class Convert
{
	public :

		Convert();
		Convert(std::string base, std::string type);
		Convert(Convert const & ConvertACopier);
		~Convert();
		Convert & operator=(Convert const & ConvertACopier);

		void		setCharFlag(std::string flag);
		void		setIntFlag(std::string flag);
		void		setFloatFlag(std::string flag);
		void		setDoubleFlag(std::string flag);
		std::string	getType();
		std::string	getCharFlag();
		std::string	getIntFlag();
		std::string	getFloatFlag();
		std::string	getDoubleFlag();
		void		setAttributes();
		void		setAttributesIfChar();
		void		setAttributesIfInt();
		void		setAttributesIfFloat();
		void		setAttributesIfDouble();
		void		print();
	
	private :

		std::string	m_base;
		std::string	m_type;
		char		m_char;
		std::string	m_char_flag;	// possible ---> impossible ?
		int			m_int;
		std::string	m_int_flag;		// possible ---> impossible ?
		float		m_float;
		std::string	m_float_flag;	// no --> -inff, +inff, nanf, etc.
		double		m_double;
		std::string	m_double_flag;	// no --> -inf, +inf, nan, etc.
};

std::ostream & operator<<(std::ostream & flux, Convert & conv);

#endif
