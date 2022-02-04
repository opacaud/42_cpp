/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:20:59 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 14:33:24 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl << RED << "---------------MAIN DU SUJET---------------" << RESET << std::endl << std::endl;

	const Animal* meta_new = new Animal();
	const Animal* i_new = new Cat();
	const Animal* j_new = new Dog();

	std::cout << std::endl << meta_new->getType() << " " << std::endl;
	std::cout << i_new->getType() << " " << std::endl;
	std::cout << j_new->getType() << " " << std::endl;
	meta_new->makeSound();
	i_new->makeSound();	// will output the cat sound!
	j_new->makeSound();

	std::cout << RED << std::endl << "---------------AUTRES  TESTS---------------" << RESET << std::endl << std::endl;

	Animal	animal;
	Cat		cat;
	Dog		dog;

	std::cout << std::endl << animal.getType() << " " << std::endl;
	std::cout << cat.getType() << " " << std::endl;
	std::cout << dog.getType() << " " << std::endl;
	animal.makeSound();
	cat.makeSound();
	dog.makeSound();

	std::cout << RED << std::endl << "----------------WRONG TESTS----------------" << RESET << std::endl << std::endl;

	const WrongAnimal* meta_wrong_new = new WrongAnimal();
	const WrongAnimal* i_wrong_new = new WrongCat();

	std::cout << std::endl << meta_wrong_new->getType() << " " << std::endl;
	std::cout << i_wrong_new->getType() << " " << std::endl;
	meta_wrong_new->makeSound();
	i_wrong_new->makeSound();	// will not output the cat sound!

	std::cout << RED << std::endl << "------------------THE END------------------" << RESET << std::endl << std::endl;

	delete meta_new;
	delete i_new;
	delete j_new;
	delete meta_wrong_new;
	delete i_wrong_new;

	return (0);
}
