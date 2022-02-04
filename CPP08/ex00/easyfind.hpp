/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 09:42:27 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/31 09:42:27 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <algorithm>

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

class NotFoundException : public std::exception
{
	public :
		
		virtual const char *what() const throw()
		{
			return("The value is not found.");
		};
};

///////////////////////// EASYFIND RETURNING AN ITERATOR /////////////////////////

template<typename T>
typename T::iterator	easyfind(T & value, int to_find)
{
	typename T::iterator it = std::find(value.begin(), value.end(), to_find);
	if (it == value.end())
	{
		throw NotFoundException();
	}
	return (it);
}

///////////////////////// EASYFIND RETURNING AN INT /////////////////////////

// template<typename T>
// int	easyfind(T & value, int to_find)
// {
// 	typename T::iterator it = std::find(value.begin(), value.end(), to_find);
// 	if (it == value.end())
// 	{
// 		throw NotFoundException();
// 	}
// 	return (*it);
// }

void	print(std::vector<int> vec)
{
	unsigned int	i;

	i = 0;
	std::cout << std::endl << BOLDBLUE << "VEC" << RESET << std::endl << "-------> ";
	while (i < vec.size())
	{
		std::cout << vec[i] << " ";
		i++;
	}
	std::cout << std::endl << std::endl;
}

#endif
