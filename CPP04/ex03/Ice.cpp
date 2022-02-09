/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:59:26 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/09 17:18:07 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    // std::cout << BOLDBLUE << "Default constructor for Ice called." << RESET << std::endl;
	m_type = "ice";
}

Ice::Ice(Ice const & IceACopier) : AMateria(IceACopier)
{
	// std::cout << BLUE << "Copy constructor for Ice called." << RESET << std::endl;
	*this = IceACopier;
}

Ice::~Ice()
{
    // std::cout << BOLDBLUE << "Destructor for Ice called." << RESET << std::endl;
}

Ice & Ice::operator=(Ice const & IceACopier)
{
    // std::cout << BLUE << "Assignation operator for Ice called." << RESET << std::endl;
	if (this != &IceACopier)
	{
		m_type = IceACopier.getType();
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

std::string	Ice::getType() const
{
	return (m_type);
}

AMateria* Ice::clone() const
{
	Ice	*new_one;

	new_one = new Ice(*this);

	return(new_one);
}

void Ice::use(ICharacter& target)
{
	std::cout << BOLDRED << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}
