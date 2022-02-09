/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:24:20 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:24:20 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int     number;
    Zombie  *horde;
    int     i;

    number = 5;

    if (number == 0)
        return (0);

    horde = zombieHorde(number, "Bob");

    i = 0;
    while (i < number)
    {
        horde[i].announce();
        i++;
    }

    std::cout << std::endl << BOLDCYAN << "-------------------- GRENADE --------------------" << RESET << std::endl << std::endl;

    delete [] horde;

    return (0);
}
