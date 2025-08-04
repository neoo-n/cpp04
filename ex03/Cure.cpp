
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
	Cure new_obj;
	new_obj = *this;
	return (&new_obj);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.name << "'s wounds *" << std::endl;
}
