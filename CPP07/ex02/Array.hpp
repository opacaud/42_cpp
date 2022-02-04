/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:41:49 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:50:25 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

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
class Array
{
	public :

		Array() : m_array(0), m_size(0)
		{
    		// std::cout << BOLDBLUE << "Default constructor for Array called." << RESET << std::endl;
		};

		Array(unsigned int n) : m_array(new T[n]), m_size(n)
		{
			// std::cout << BOLDBLUE << "Constructor for Array called." << RESET << std::endl;
			unsigned int	i;

			i = 0;
			while (i < m_size)
			{
				m_array[i] = T();
				i++;
			}
		};

		Array(Array const & ArrayACopier)
		{
		    // std::cout << BLUE << "Copy constructor for Array called." << RESET << std::endl;
			*this = ArrayACopier;
		};

		Array & operator=(Array const & ArrayACopier)
		{
			// std::cout << BLUE << "Assignation operator for Array called." << RESET << std::endl;
			unsigned int	i;

			if (this != &ArrayACopier)
			{
				m_array = new T[ArrayACopier.m_size];
				m_size = ArrayACopier.m_size;
				i = 0;
				while (i < m_size)
				{
					m_array[i] = ArrayACopier.m_array[i];
					i++;
				}
			}
			return (*this);
		};

		~Array()
		{
    		// std::cout << BOLDBLUE << "Destructor for Array called." << RESET << std::endl;
			if (m_array)
				delete [] m_array;
		}

	    class WrongIndexException : public std::exception
        {
            public :
                
				virtual const char *what() const throw()
				{
					return("The index is wrong.");
				};
		};

		T & operator[](unsigned int index)
		{
			if (index < m_size)
				return (m_array[index]);
			else
				throw Array::WrongIndexException();
		};

		unsigned int	size() const
		{
			if (m_array)
				return (m_size);
			return (0);
		};

		void	set_array(unsigned int index, T value)
		{
			if (index < m_size)
				m_array[index] = value;
		}

		T		get_array(int index)
		{
			return (m_array[index]);
		};

	private :

		T				*m_array;
		unsigned int	m_size;
};

#endif
