/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:00:15 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 16:00:15 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap Harry("Harry");

    DiamondTrap Copy(Harry);

    std::cout << std::endl << "As a reminder... hitPoints should be 100 (fragtrap)" << std::endl;
    std::cout << "                 energyPoints should be 50 (scavtrap)" << std::endl;
    std::cout << "                 attackDamage should be 30 (fragtrap)" << std::endl;

    std::cout << std::endl << "------------------------------DIAMONDTRAP-------------------------------" << std::endl << std::endl;

    std::cout << "Harry's hit points count at the beginning are: " << Harry.get_hitPoints() << std::endl;

    Harry.attack("Ignace");

    Harry.takeDamage(50);
    
    std::cout << "Harry's hit points count after taking damage are: " << Harry.get_hitPoints() << std::endl;
    
    Harry.beRepaired(35);

    std::cout << "Harry's hit points count after repairing damage are: " << Harry.get_hitPoints() << std::endl;

    Harry.guardGate();

    Harry.highFivesGuys();

    Harry.whoAmI();

    std::cout << std::endl << "----------------------------------COPY----------------------------------" << std::endl << std::endl;

    std::cout << "Harry's copy hit points count at the beginning are: " << Copy.get_hitPoints() << std::endl;

    Copy.attack("Jacques");

    Copy.takeDamage(25);
    
    std::cout << "Harry's copy hit points count after taking damage are: " << Copy.get_hitPoints() << std::endl;
    
    Copy.beRepaired(30);

    std::cout << "Harry's copy hit points count after repairing damage are: " << Copy.get_hitPoints() << std::endl;

    Copy.guardGate();

    Copy.highFivesGuys();
    
    Copy.whoAmI();

    std::cout << std::endl << "------------------------------THE END------------------------------" << std::endl << std::endl;

    return (0);
}
