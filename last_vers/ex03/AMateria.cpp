/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:38:19 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/05 18:19:55 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------
AMateria::AMateria()
: type("nothing")
{
	std::cout << "Default Materia constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &cpy)
: type(cpy.type)
{
	std::cout << "Copy Materia constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
:type(type)
{
	std::cout << "Materia constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "Destructor Materia called" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &obj)
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "Assignment op Materia called" << std::endl;
	return (*this);
}

// -------------------------------- GET ----------------------------------------
std::string const &AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "* using materia on " << target.getName() << " *" << std::endl;
}