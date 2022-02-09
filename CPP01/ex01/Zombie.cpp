/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:24:37 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:24:37 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie::Zombie( void )
{
    // std::cout << BOLDBLUE << "Default constructor for Zombie called." << RESET << std::endl;
    m_name = "";
}

Zombie::Zombie( std::string name )
{
	// std::cout << BOLDBLUE << "Constructor for Zombie called." << RESET << std::endl;
    m_name = name;
}

Zombie::~Zombie()
{
    // std::cout << BOLDBLUE << "Destructor for Zombie called." << RESET << std::endl;
    std::cout << m_name << BOLDRED << " DyiiiiiiiinnnzzzZ..." << RESET << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void    Zombie::announce( void )
{
    std::cout << m_name << BOLDGREEN << " BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void    Zombie::ft_set_name ( std::string name, int number )
{
    std::stringstream nb_string;

    nb_string << name << "_" << number;
    m_name = nb_string.str();
}
