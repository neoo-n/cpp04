/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:12:40 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/08 11:58:37 by dvauthey         ###   ########.fr       */
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
