/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:20:59 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/09 17:13:14 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	delete j;//should not create a leak
// 	delete i;
	
// 	//...
	
// 	return (0);
// }

int main()
{
	int		nb_of_animals;
	int		i;

	nb_of_animals = 6;

	Animal	*array[nb_of_animals];

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

	std::cout << std::endl << BOLDMAGENTA << "-------------------------------------------------" << RESET << std::endl << std::endl;

	std::cout << MAGENTA << "Proof that half is dog and the other half is cat from Animal:" << RESET << std::endl << std::endl;

	i = 0;
	while (i < nb_of_animals)
	{
		array[i]->makeSound();
		i++;
	}

	std::cout << std::endl << BOLDMAGENTA << "-------------------------------------------------" << RESET << std::endl << std::endl;

	*array[1] = *array[0];

	std::cout << std::endl << MAGENTA << "Proof of deep copy through the addresses of the brains:" << RESET << std::endl << std::endl;
	std::cout << "Address of array[0]->Brain: " << array[0]->getBrain() << std::endl;
	std::cout << "Address of array[1]->Brain: " << array[1]->getBrain() << std::endl;

	std::cout << std::endl << BOLDMAGENTA << "-------------------------------------------------" << RESET << std::endl << std::endl;

	i = 0;
	while (i < nb_of_animals)
	{
		delete array[i];
		i++;
	}

	return (0);
}
