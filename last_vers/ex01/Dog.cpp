/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:32:24 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/22 16:03:13 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Dog::Dog()
: Animal("Dog")
{
	brain = new Brain();
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
: Animal(other.type)
{
	brain = new Brain();
	*brain = *(other.brain);
    std::cout << "Copy Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	if (brain)
		delete(this->brain);
    std::cout << "Destructor Dog called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
		*(this->brain) = *(obj.brain);
	}
	return (*this);
}

// ------------------------------------ GET & SET -------------------------------------------

Brain	*Dog::getBrain()
{
	return (brain);
}

void	Dog::setBrain(const std::string idea, int index)
{
	this->brain->setIdea(idea, index);
}

// ------------------------------------- METHODS --------------------------------------------

void	Dog::makeSound() const
{
	std::cout << "Waouf" << std::endl;
}

void	Dog::printBrainIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << "idea " << i + 1 << " : " << this->brain->getIdeas()[i] << std::endl;
}
