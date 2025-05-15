/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:13:05 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/15 16:16:00 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

WrongAnimal::WrongAnimal()
: type("WrongAnimal")
{
    std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
: type(other.type)
{
    std::cout << "Copy WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type)
: type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "Assignment WrongAnimal called" << std::endl;
	return (*this);
}

// -------------------------------- GET ----------------------------------------
std::string	WrongAnimal::getType() const
{
	return (type);
}

// ------------------------------- METHODS -------------------------------------
void	WrongAnimal::makeSound() const
{
	std::cout << "I'm a wrong animal" << std::endl;
}
