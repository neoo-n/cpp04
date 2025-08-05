/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:46:20 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/05 16:17:17 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Ice::Ice()
: AMateria("ice")
{
    std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &cpy)
: AMateria(cpy.type)
{
    std::cout << "Copy Ice constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Destructor Ice called" << std::endl;
}

Ice &Ice::operator=(const Ice &obj)
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "Assignment op Ice called" << std::endl;
	return (*this);
}

// ------------------------------- METHODS -------------------------------------
Ice* Ice::clone() const
{
	return (new Ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
