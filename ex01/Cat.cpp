/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:32:29 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/22 15:51:26 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Cat::Cat()
: Animal("Cat")
{
	brain = new Brain();
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
: Animal(other.type)
{
	brain = new Brain();
	*brain = *(other.brain);
    std::cout << "Copy Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	if (brain)
		delete(this->brain);
    std::cout << "Destructor Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
		*(this->brain) = *(obj.brain);
	}
	return (*this);
}

// ------------------------------------ GET & SET -------------------------------------------

Brain	*Cat::getBrain()
{
	return (brain);
}

void	Cat::setBrain(const std::string idea, int index)
{
	this->brain->setIdea(idea, index);
}

// ------------------------------------- METHODS --------------------------------------------

void	Cat::makeSound() const
{
	std::cout << "Miaw" << std::endl;
}

void	Cat::printBrainIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << "idea " << i << " : " << this->brain->getIdeas()[i];
}

