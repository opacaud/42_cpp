/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:25:39 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:25:39 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
    // std::cout << BOLDBLUE << "Default constructor for Karen called." << RESET << std::endl;
}

Karen::~Karen()
{
    // std::cout << BOLDBLUE << "Destructor for Karen called." << RESET << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void    Karen::complain( std::string level )
{
    int         i;
    std::string level_tab[] = {"debug", "info", "warning", "error"};

    void (Karen::*level_ptr[4]) (void) =
    {
        level_ptr[0] = &Karen::debug,
        level_ptr[1] = &Karen::info,
        level_ptr[2] = &Karen::warning,
        level_ptr[3] = &Karen::error
    };
    i = 0;
    while (i < 4)
    {
        if (level_tab[i] == level)
        {
            (this->*level_ptr[i])();
            break ;
        }
        i++;
    }
}

void    Karen::debug( void )
{
    std::cout << BOLDYELLOW << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << RESET << std::endl << std::endl;
}

void    Karen::info( void )
{
    std::cout << BOLDCYAN << "[ INFO ]\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << RESET << std::endl << std::endl;
}

void    Karen::warning( void )
{
    std::cout << BOLDBLUE << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << RESET << std::endl << std::endl;
}

void    Karen::error( void )
{
    std::cout << BOLDMAGENTA << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now." << RESET << std::endl << std::endl;
}
