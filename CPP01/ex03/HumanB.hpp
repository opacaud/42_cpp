/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:25:11 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:25:11 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
    public :

        HumanB(std::string name);
        ~HumanB();

        void        attack();
        void        setWeapon(Weapon *weapon);
        void        setWeapon(Weapon &weapon);

    private :

        std::string m_name;
        Weapon      *m_weapon;
};

#endif
