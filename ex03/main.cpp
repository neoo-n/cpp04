/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:34:01 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/06 16:39:05 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	std::cout << "-------------------- Materia Source --------------------" << std::endl;
	IMateriaSource* src = new MateriaSource();

	std::cout << std::endl << "--------------------- Learn Materia --------------------" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << std::endl << "------------------ Character created -------------------" << std::endl;
	ICharacter* me = new Character("me");

	std::cout << std::endl << "-------------- Materia created & equipped --------------" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl << "------------- Bob created and Materia used -------------" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl << "--------------------- Destruction ----------------------" << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}