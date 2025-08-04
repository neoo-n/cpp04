
#include "ICharacter.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

ICharacter::ICharacter()
:
{
    std::cout << "Default ICharacter constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &cpy)
:
{
    std::cout << "Copy ICharacter constructor called" << std::endl;
}

ICharacter::~ICharacter()
{
    std::cout << "Destructor ICharacter called" << std::endl;
}

ICharacter &ICharacter::operator=(const ICharacter &obj)
{
	std::cout << "Assignment ICharacter called" << std::endl;
}

