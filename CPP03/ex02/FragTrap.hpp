/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:59:38 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 15:59:38 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :

        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const & FragTrapACopier);
        ~FragTrap();
        FragTrap & operator=(FragTrap const & FragTrapACopier);

        void    highFivesGuys(void);
};

#endif
