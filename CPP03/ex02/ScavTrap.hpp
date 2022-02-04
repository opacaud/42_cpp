/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:59:51 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 15:59:51 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :

        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & ScavTrapACopier);
        ~ScavTrap();
        ScavTrap & operator=(ScavTrap const & ScavTrapACopier);

        void    attack(std::string const & target);
        void    guardGate();
};

#endif
