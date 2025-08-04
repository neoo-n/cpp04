
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
	Ice	new_obj;
	new_obj = *this;
	return (&new_obj);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.name << std::endl;
}