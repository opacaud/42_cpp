/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:20:59 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/09 17:18:42 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << std::endl;
	me->use(0, *bob);
	std::cout << std::endl;
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << std::endl << BOLDMAGENTA << "-------------------------------------------" << RESET << std::endl << std::endl;

	ICharacter* charlie = new Character("charlie");
	ICharacter* moi = new Character("moi");
	IMateriaSource* source = new MateriaSource();

	source->learnMateria(new Ice());
	tmp = source->createMateria("ice");
	moi->equip(tmp);
	source->learnMateria(new Cure());
	tmp = source->createMateria("cure");
	moi->equip(tmp);
	source->learnMateria(new Ice());
	tmp = source->createMateria("ice");
	moi->equip(tmp);
	source->learnMateria(new Cure());
	tmp = source->createMateria("cure");
	moi->equip(tmp);

	moi->use(0, *charlie);
	std::cout << std::endl;
	moi->use(1, *charlie);
	std::cout << std::endl;
	moi->use(2, *charlie);
	std::cout << std::endl;
	moi->use(3, *charlie);

	std::cout << std::endl << BOLDMAGENTA << "-------------------------------------------" << RESET << std::endl << std::endl;

	AMateria* ice = new Ice();
	source->learnMateria(ice);
	tmp = source->createMateria("ice");
	delete ice;
	std::cout << std::endl;
	moi->equip(tmp);
	delete tmp;

	delete moi;
	delete charlie;
	delete source;

	std::cout << std::endl << BOLDMAGENTA << "-----------------THE END-------------------" << RESET << std::endl << std::endl;
	
	return (0);
}
