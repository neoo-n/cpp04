/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:32:24 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/20 16:24:30 by dvauthey         ###   ########.fr       */
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
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

// ------------------------------------- METHODS --------------------------------------------

void	Dog::makeSound() const
{
	std::cout << "Waouf" << std::endl;
}
