/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:59:42 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 15:59:42 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap Alain("Alain");
    ScavTrap Charles("Charles");
    FragTrap Francis("Francis");

    std::cout << std::endl << "--------------------------------CLAPTRAP--------------------------------" << std::endl << std::endl;

    std::cout << "Alain's hit points count at the beginning are: " << Alain.get_hitPoints() << std::endl;

    Alain.attack("Bernard");

    Alain.takeDamage(2);
    
    std::cout << "Alain's hit points count after taking damage are: " << Alain.get_hitPoints() << std::endl;
    
    Alain.beRepaired(1);

    std::cout << "Alain's hit points count after repairing damage are: " << Alain.get_hitPoints() << std::endl;
    
    std::cout << std::endl << "--------------------------------SCAVTRAP--------------------------------" << std::endl << std::endl;

    std::cout << "Charles' hit points count at the beginning are: " << Charles.get_hitPoints() << std::endl;

    Charles.attack("Didier");

    Charles.takeDamage(20);
    
    std::cout << "Charles' hit points count after taking damage are: " << Charles.get_hitPoints() << std::endl;
    
    Charles.beRepaired(10);

    std::cout << "Charles' hit points count after repairing damage are: " << Charles.get_hitPoints() << std::endl;

    Charles.guardGate();

    std::cout << std::endl << "--------------------------------FRAGTRAP--------------------------------" << std::endl << std::endl;

    std::cout << "Francis' hit points count at the beginning are: " << Francis.get_hitPoints() << std::endl;

    Francis.attack("Gerard");

    Francis.takeDamage(50);
    
    std::cout << "Francis' hit points count after taking damage are: " << Francis.get_hitPoints() << std::endl;
    
    Francis.beRepaired(35);

    std::cout << "Francis' hit points count after repairing damage are: " << Francis.get_hitPoints() << std::endl;

    Francis.highFivesGuys();

    std::cout << std::endl << "----------------------------------COPY----------------------------------" << std::endl << std::endl;

    FragTrap Copy(Francis);

    std::cout << std::endl << "Francis' copy hit points count at the beginning are: " << Copy.get_hitPoints() << std::endl;

    Copy.attack("Harry");

    Copy.takeDamage(25);
    
    std::cout << "Francis' copy hit points count after taking damage are: " << Copy.get_hitPoints() << std::endl;
    
    Copy.beRepaired(30);

    std::cout << "Francis' copy hit points count after repairing damage are: " << Copy.get_hitPoints() << std::endl;

    Copy.highFivesGuys();

    std::cout << std::endl << "------------------------------THE END------------------------------" << std::endl << std::endl;

    return (0);
}
