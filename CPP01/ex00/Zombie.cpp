/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:24:11 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:24:11 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : m_name(name)
{
	// std::cout << BOLDBLUE << "Constructor for Zombie called." << RESET << std::endl;
}

Zombie::~Zombie()
{
    // std::cout << BOLDBLUE << "Destructor for Zombie called." << RESET << std::endl;
    std::cout << m_name << " DyiiiiiiiinnnzzzZ..." << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void    Zombie::announce( void )
{
    std::cout << m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
