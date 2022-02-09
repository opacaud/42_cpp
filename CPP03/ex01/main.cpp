/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:59:16 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 15:59:16 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap Alain("Alain");
    ScavTrap Charles("Charles");

    std::cout << std::endl << BOLDMAGENTA << "--------------------------------CLAPTRAP--------------------------------" << RESET << std::endl << std::endl;

    std::cout << "Alain's hit points count at the beginning are: " << Alain.get_hitPoints() << std::endl;

    Alain.attack("Bernard");

    Alain.takeDamage(2);
    
    std::cout << "Alain's hit points count after taking damage are: " << Alain.get_hitPoints() << std::endl;
    
    Alain.beRepaired(1);

    std::cout << "Alain's hit points count after repairing damage are: " << Alain.get_hitPoints() << std::endl;
    
    std::cout << std::endl << BOLDMAGENTA << "--------------------------------SCAVTRAP--------------------------------" << RESET << std::endl << std::endl;

    std::cout << "Charles' hit points count at the beginning are: " << Charles.get_hitPoints() << std::endl;

    Charles.attack("Didier");

    Charles.takeDamage(20);
    
    std::cout << "Charles' hit points count after taking damage are: " << Charles.get_hitPoints() << std::endl;
    
    Charles.beRepaired(10);

    std::cout << "Charles' hit points count after repairing damage are: " << Charles.get_hitPoints() << std::endl;

    Charles.guardGate();

    std::cout << std::endl << BOLDMAGENTA << "----------------------------------COPY----------------------------------" << RESET << std::endl << std::endl;

    ScavTrap Copy(Charles);

    std::cout << std::endl << "Charles copy's hit points count at the beginning are: " << Copy.get_hitPoints() << std::endl;

    Copy.attack("Eugene");

    Copy.takeDamage(25);
    
    std::cout << "Charles copy's hit points count after taking damage are: " << Copy.get_hitPoints() << std::endl;
    
    Copy.beRepaired(30);

    std::cout << "Charles copy's hit points count after repairing damage are: " << Copy.get_hitPoints() << std::endl;

    Copy.guardGate();

    std::cout << std::endl << BOLDMAGENTA << "------------------------------THE END------------------------------" << RESET << std::endl << std::endl;

    return (0);
}
