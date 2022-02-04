/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:00:04 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 16:00:04 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public :

        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const & DiamondTrapACopier);
        ~DiamondTrap();
        DiamondTrap & operator=(DiamondTrap const & DiamondTrapACopier);

        void        attack(std::string const & target);
        void        whoAmI();

    private :

        std::string m_name;
};

#endif
