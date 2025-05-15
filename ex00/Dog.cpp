/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:32:24 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/15 12:00:00 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Dog::Dog()
: Animal("Dog")
{
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
: Animal(other.type)
{
    std::cout << "Copy Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	return (*this);
}

// ------------------------------------- METHODS --------------------------------------------

void	Dog::makeSound()
{
	std::cout << "Waouf" << std::endl;
}
