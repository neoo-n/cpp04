
#include "Character.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Character::Character()
: name("no")
{
    std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(const Character &cpy)
: name(cpy.name)
{
    std::cout << "Copy Character constructor called" << std::endl;
}

Character::~Character()
{
    std::cout << "Destructor Character called" << std::endl;
}

Character &Character::operator=(const Character &obj)
{
	if (this != &obj)
		this->name = obj.name;
	std::cout << "Assignment Character called" << std::endl;
	return (*this);
}

// -------------------------------- GET ----------------------------------------
std::string const &Character::getName() const
{
	return (name);
}

// ------------------------------- METHODS -------------------------------------
void Character::equip(AMateria *m)
{
	int i = 0;

	while (i < 4)
	{
		if (this->materias[i]->getType() == "nothing")
			this->materias[i] = m;
		i++;
	}
}

void Character::unequip(int idx)
{
	
}