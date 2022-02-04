/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:23:48 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:23:48 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  first_zombie("Zombie_1");
    Zombie  *second_zombie;

    first_zombie.announce();

    second_zombie = newZombie("  Zombie_2");
    (*second_zombie).announce();
    delete(second_zombie);
    
    randomChump("    Zombie_3");

    return (0);
}
