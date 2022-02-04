/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:24:45 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:43:45 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *horde;
    int     i;

    horde = new Zombie[N];
    i = 0;
    while (i < N)
    {
        horde[i].ft_set_name(name, i);
        i++;
    }
    return (horde);
}
