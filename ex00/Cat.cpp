/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:32:29 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/15 14:43:59 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Cat::Cat()
: Animal("Cat")
{
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
: Animal(other.type)
{
    std::cout << "Copy Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

// ------------------------------------- METHODS --------------------------------------------

void	Cat::makeSound()
{
	std::cout << "Miaw" << std::endl;
}
