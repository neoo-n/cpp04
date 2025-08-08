#include <iostream>
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void subject_provided_test()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std ::cout << std::endl;

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std ::cout << std::endl;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std ::cout << std::endl;

	delete bob;
	delete me;
	delete src;
}

void copy_constructor_test()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std ::cout << std::endl;

	Character me("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me.equip(tmp);
	tmp = src->createMateria("cure");
	me.equip(tmp);
	std ::cout << std::endl;

	Character copy(me);
	copy.unequip(0);
	me.use(0, copy);
	copy.use(0, me);
	std ::cout << std::endl;

	delete src;
}

void assignment_operator_test()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std ::cout << std::endl;

	Character me("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me.equip(tmp);
	tmp = src->createMateria("cure");
	me.equip(tmp);
	std ::cout << std::endl;

	Character copy;
	copy = me;
	me.unequip(0);
	me.use(0, copy);
	copy.use(0, me);
	std ::cout << std::endl;

	delete src;
}

void invalid_arguments_test()
{
	IMateriaSource* src = new MateriaSource();
	std ::cout << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(0);
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	std ::cout << std::endl;

	ICharacter* me = new Character("me");
	AMateria* tmp;
	std ::cout << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("nonexistant");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std ::cout << std::endl;

	ICharacter* bob = new Character("bob");
	me->unequip(-1);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(-1, *bob);
	std ::cout << std::endl;

	delete bob;
	delete me;
	delete src;
}

int main()
{
	subject_provided_test();
	copy_constructor_test();
	assignment_operator_test();
	invalid_arguments_test();
	return 0;
}
