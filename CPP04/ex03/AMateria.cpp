/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:58:20 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/25 09:14:58 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : m_type("AMateria")
{
    // std::cout << BOLDBLUE << "Default constructor for AMateria called." << RESET << std::endl;
}

AMateria::AMateria(std::string const & type) : m_type(type)
{
	// std::cout << BOLDBLUE << "Constructor for AMateria called." << RESET << std::endl;
}

AMateria::AMateria(AMateria const & AMateriaACopier)
{
	// std::cout << BLUE << "Copy constructor for AMateria called." << RESET << std::endl;
	m_type = AMateriaACopier.getType();
}

AMateria::~AMateria()
{
    // std::cout << BOLDBLUE << "Destructor for AMateria called." << RESET << std::endl;
}

AMateria & AMateria::operator=(AMateria const & AMateriaACopier)
{
    // std::cout << BLUE << "Assignation operator for AMateria called." << RESET << std::endl;
	if (this != &AMateriaACopier)
	{
		m_type = AMateriaACopier.getType();
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

std::string	const &AMateria::getType() const
{
	return (m_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
