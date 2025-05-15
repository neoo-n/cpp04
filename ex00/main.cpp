/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:20:56 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/15 16:21:59 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout  << std::endl << "------------------- TYPE -----------------------------" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout  << std::endl << "------------------- SOUND -----------------------------" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	std::cout  << std::endl << "------------------- DESTRUCTORS -----------------------------" << std::endl;
	delete(meta);
	delete(j);
	delete(i);

	std::cout << std::endl << "------------------- WRONG ANIMAL -----------------------------------" << std::endl;
	const WrongAnimal* w_animal = new WrongAnimal();
	const WrongAnimal* w_cat = new WrongCat();

	std::cout  << std::endl << "------------------- TYPE -----------------------------" << std::endl;
	std::cout << w_cat->getType() << " " << std::endl;

	std::cout  << std::endl << "------------------- SOUND -----------------------------" << std::endl;
	w_cat->makeSound(); //will output the cat sound!
	w_animal->makeSound();
	
	std::cout  << std::endl << "------------------- DESTRUCTORS -----------------------------" << std::endl;
	delete(w_animal);
	delete(w_cat);
	return 0;
}
