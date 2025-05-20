/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:20:56 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/20 17:23:40 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	std::cout << "-------------------- CONSTRUCTION OF ANIMALS --------------------" << std::endl;
	const Animal *animals[10];

	std::cout << std::endl << "------------------------- DOGS AND CATS -------------------------" << std::endl;
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 0; i < 5; i++)
		animals[i + 5] = new Cat();

	std::cout << std::endl << "------------------------- MAKING SOUNDS -------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();

	std::cout << std::endl << "--------------------------- SET BRAIN ---------------------------" << std::endl;

	std::cout << std::endl << "--------------------------- DEEP COPY ---------------------------" << std::endl;


	std::cout << std::endl << "-------------------------- DESTRUCTION --------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
		delete(animals[i]);
	return (0);
}
