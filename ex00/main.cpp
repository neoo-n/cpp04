/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:20:56 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/07 16:44:10 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void	subject_test()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete(meta);
	delete(j);
	delete(i);

	std::cout << std::endl << "------------------------ WRONG ANIMAL -----------------------" << std::endl;
	const WrongAnimal* w_animal = new WrongAnimal();
	const WrongAnimal* w_cat = new WrongCat();

	std::cout << w_cat->getType() << " " << std::endl;

	w_cat->makeSound(); //will output the cat sound!
	w_animal->makeSound();
	
	delete(w_animal);
	delete(w_cat);
}

void copy_constructor_test()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Cat* cat = new Cat();
	const Cat cpycat(*cat);

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << cpycat.getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	cat->makeSound();
	cpycat.makeSound();
	
	delete(meta);
	delete(j);
	delete(i);
	delete(cat);

	std::cout << std::endl << "------------------------ WRONG ANIMAL -----------------------" << std::endl;
	const WrongAnimal* w_animal = new WrongAnimal();
	const WrongAnimal* w_cat = new WrongCat();
	const WrongCat* w_cattest = new WrongCat();
	const WrongCat w_cpycat(*w_cattest);

	std::cout << w_cat->getType() << " " << std::endl;
	std::cout << w_cattest->getType() << " " << std::endl;
	std::cout << w_cpycat.getType() << " " << std::endl;

	w_cat->makeSound(); //will output the cat sound!
	w_cattest->makeSound();
	w_cpycat.makeSound();
	w_animal->makeSound();
	
	delete(w_animal);
	delete(w_cat);
	delete(w_cattest);
}

void assignment_operator_test()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Cat* cat = new Cat();
	Cat cpycat;
	cpycat = *cat;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << cpycat.getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	cat->makeSound();
	cpycat.makeSound();
	
	delete(meta);
	delete(j);
	delete(i);
	delete(cat);

	std::cout << std::endl << "------------------------ WRONG ANIMAL -----------------------" << std::endl;
	const WrongAnimal* w_animal = new WrongAnimal();
	const WrongAnimal* w_cat = new WrongCat();
	const WrongCat* w_cattest = new WrongCat();
	const WrongCat w_cpycat(*w_cattest);

	std::cout << w_cat->getType() << " " << std::endl;
	std::cout << w_cattest->getType() << " " << std::endl;
	std::cout << w_cpycat.getType() << " " << std::endl;

	w_cat->makeSound(); //will output the cat sound!
	w_cattest->makeSound();
	w_cpycat.makeSound();
	w_animal->makeSound();
	
	delete(w_animal);
	delete(w_cat);
	delete(w_cattest);
}

int	main()
{
	subject_test();
	copy_constructor_test();
	assignment_operator_test();
	return 0;
}
