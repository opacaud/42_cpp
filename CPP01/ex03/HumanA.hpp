/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:25:04 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:25:04 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
    public :

        HumanA(std::string name, Weapon &weapon);
        ~HumanA();

        void        attack();

    private :

        std::string m_name;
        Weapon      &m_weapon;
};

#endif
