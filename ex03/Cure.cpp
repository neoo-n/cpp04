/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:46:28 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/05 18:01:45 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Cure::Cure()
: AMateria("cure")
{
    std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &cpy)
: AMateria(cpy.type)
{
    std::cout << "Copy Cure constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Destructor Cure called" << std::endl;
}

Cure &Cure::operator=(const Cure &obj)
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "Assignment op Cure called" << std::endl;
	return (*this);
}

// ------------------------------- METHODS -------------------------------------
Cure* Cure::clone() const
{
	return (new Cure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
