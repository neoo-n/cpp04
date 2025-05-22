/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:20:56 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/22 11:46:04 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	std::cout << "-------------------- CONSTRUCTION OF ANIMALS --------------------" << std::endl;
	Animal *animals[10];

	std::cout << std::endl << "------------------------- DOGS AND CATS -------------------------" << std::endl;
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 0; i < 5; i++)
		animals[i + 5] = new Cat();

	std::cout << std::endl << "------------------------- MAKING SOUNDS -------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();

	std::cout << std::endl << "--------------------------- TEST BRAIN --------------------------" << std::endl;
	for (int i = 0; i < 5; i++)
		animals[i]->setBrain("I want to run behind a ball", 0);
	for (int i = 0; i < 5; i++)
		animals[i + 5]->setBrain("I want to chase a mouse", 0);
	for (int i = 0; i < 10; i++)
		std::cout << animals[i]->getType() << " has the idea of : " << animals[i]->getBrain()->getIdeas()[0] << std::endl;

	std::cout << std::endl << "-------------------------- DESTRUCTION --------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
		delete(animals[i]);

	std::cout << std::endl << "--------------------------- DEEP COPY ---------------------------" << std::endl;
	Dog	dog1;
	Dog	dog2;

	dog1.setBrain("I want to run after a ball", 0);
	dog2.setBrain("This need to be deleted", 3);
	dog2 = dog1;
	


	
	return (0);
}
