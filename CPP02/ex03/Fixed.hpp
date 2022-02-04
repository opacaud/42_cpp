/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:39:30 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 10:39:30 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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

class Fixed
{
    public :

        Fixed();
        Fixed(int const raw);
        Fixed(float const raw);
        Fixed(Fixed const & fixedACopier);
        ~Fixed();
        Fixed & operator=(Fixed const &fixedACopier);

        int                     getRawBits(void) const;
        void                    setRawBits(int const raw);
        float                   toFloat(void) const;
        int                     toInt(void) const;

        bool                    operator==(Fixed const & b) const;
        bool                    operator!=(Fixed const & b) const;
        bool                    operator<(Fixed const & b) const;
        bool                    operator>(Fixed const & b) const;
        bool                    operator<=(Fixed const & b) const;
        bool                    operator>=(Fixed const & b) const;

        Fixed                   operator+(Fixed const & b) const;
        Fixed                   operator-(Fixed const & b) const;
        Fixed                   operator*(Fixed const & b) const;
        Fixed                   operator/(Fixed const & b) const;

        Fixed &                 operator++();
        Fixed                   operator++(int);
        Fixed &                 operator--();
        Fixed                   operator--(int);

        static Fixed &          min(Fixed & a, Fixed & b);
        static Fixed const &    min(Fixed const & a, Fixed const & b);
        static Fixed &          max(Fixed & a, Fixed & b);
        static Fixed const &    max(Fixed const & a, Fixed const & b);

    private :

        int                     m_fixed_value;
        static const int        m_bits = 8;
};

std::ostream & operator<<(std::ostream &flux, Fixed const & fixed);

#endif
