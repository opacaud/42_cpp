/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:59:03 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 15:59:03 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Alain("Alain");

    std::cout << std::endl << "-----------------------ORIGINAL-----------------------------" << std::endl << std::endl;

    std::cout << "Alain's hit points count at the beginning are: " << Alain.get_hitPoints() << std::endl;

    Alain.attack("Bernard");

    Alain.takeDamage(2);
    
    std::cout << "Alain's hit points count after taking damage are: " << Alain.get_hitPoints() << std::endl;
    
    Alain.beRepaired(1);

    std::cout << "Alain's hit points count after repairing damage are: " << Alain.get_hitPoints() << std::endl;
    
    std::cout << std::endl << "----------------------------COPY----------------------------" << std::endl << std::endl;

    ClapTrap Copy(Alain);

    Copy.attack("Charles");

    Copy.takeDamage(3);
    
    std::cout << "Through Copy, Alain's hit points count after taking damage are: " << Copy.get_hitPoints() << std::endl;
    
    Copy.beRepaired(1);

    std::cout << "Through Copy, Alain's hit points count after repairing damage are: " << Copy.get_hitPoints() << std::endl;
    
    std::cout << std::endl << "------------------------ASSIGNATION------------------------" << std::endl << std::endl;

    ClapTrap Assignation("");
    Assignation = Alain;

    Assignation.attack("Francis");

    Assignation.takeDamage(2);
    
    std::cout << "Through Assignation, Alain's hit points count after taking damage are: " << Assignation.get_hitPoints() << std::endl;
    
    Assignation.beRepaired(3);

    std::cout << "Through Assignation, Alain's hit points count after repairing damage are: " << Assignation.get_hitPoints() << std::endl;

    std::cout << std::endl << "--------------------------THE END--------------------------" << std::endl << std::endl;

    return (0);
}
