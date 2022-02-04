/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:00:26 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 16:00:26 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public :

        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & ScavTrapACopier);
        ~ScavTrap();
        ScavTrap & operator=(ScavTrap const & ScavTrapACopier);

        void            attack(std::string const & target);
        void            guardGate();
    
    protected :

        unsigned int    m_scav_hitPoints;
        unsigned int    m_scav_energyPoints;
        unsigned int    m_scav_attackDamage;
};

#endif
