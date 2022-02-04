/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:00:11 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 16:00:11 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :

        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const & FragTrapACopier);
        ~FragTrap();
        FragTrap & operator=(FragTrap const & FragTrapACopier);

        void            highFivesGuys(void);

    protected :

        unsigned int    m_frag_hitPoints;
        unsigned int    m_frag_energyPoints;
        unsigned int    m_frag_attackDamage;
};

#endif
