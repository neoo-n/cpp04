/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:12:40 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/23 11:30:05 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Animal::Animal()
: type("Animal")
{
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
: type(other.type)
{
    std::cout << "Copy Animal constructor called" << std::endl;
}

Animal::Animal(const std::string type)
: type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor Animal called" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "Assignment Animal called" << std::endl;
	return (*this);
}

// -------------------------------- GET ----------------------------------------
std::string	Animal::getType() const
{
	return (type);
}

Brain	*Animal::getBrain()
{
	return (0);
}

void	Animal::setBrain(const std::string idea, int index)
{
	(void)idea;
	(void)index;
}

// ------------------------------- METHODS -------------------------------------
void	Animal::makeSound() const
{
	std::cout << "I'm an animal" << std::endl;
}

void	Animal::printBrainIdeas() const
{
}