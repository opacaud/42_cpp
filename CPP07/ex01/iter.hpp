/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 09:42:33 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/31 09:42:33 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

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

template<typename T>
void    iter(T *array, unsigned int size, void (*function_ptr)(const T &))
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        function_ptr(array[i]);
        i++;
    }
}

template <typename T>
void    ft_print_space(const T & array_element)
{
    std::cout << array_element << " ";
}

template <typename T>
void    ft_print_endl(const T & array_element)
{
    std::cout << array_element << std::endl;
}

#endif
