/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:20:59 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/09 17:16:14 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

// int main()
// {
// 	const AAnimal* j = new AAnimal();

// 	j->makeSound();

// 	delete j;
	
// 	return (0);
// }

int main()
{
	int		nb_of_animals;
	int		i;

	nb_of_animals = 6;

	AAnimal	*array[nb_of_animals];

	i = 0;
	while (i < nb_of_animals / 2)
	{
		array[i] = new Dog();
		i++;
	}
	while (i < nb_of_animals)
	{
		array[i] = new Cat();
		i++;
	}

	std::cout << std::endl << BOLDMAGENTA << "----------------------------------------------------------------------------------" << RESET << std::endl << std::endl;

	std::cout << MAGENTA << "Proof that half is dog and the other half is cat from AAnimal, an abstract class:" << RESET << std::endl << std::endl;

	i = 0;
	while (i < nb_of_animals)
	{
		array[i]->makeSound();
		i++;
	}

	std::cout << std::endl << BOLDMAGENTA << "----------------------------------------------------------------------------------" << RESET << std::endl << std::endl;

	i = 0;
	while (i < nb_of_animals)
	{
		delete array[i];
		i++;
	}

	std::cout << std::endl << "P.S.: Another main function has been commented in main.cpp. Uncommenting it, while commenting this one of course, will prove that AAnimal cannot be instanciated." << std::endl << std::endl;

	return (0);
}
