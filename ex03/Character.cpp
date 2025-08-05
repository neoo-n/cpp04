/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:46:12 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/05 15:01:46 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Character::Character()
: name("no"), first(NULL)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] =  NULL;
    std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(const Character &cpy)
: name(cpy.name), first(NULL)
{
	
	for (int i = 0; i < 4; i++)
		this->materias[i] = cpy.materias[i]->clone();
    std::cout << "Copy Character constructor called" << std::endl;
}

Character::Character(const std::string &new_name)
: name(new_name), first(NULL)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
	std::cout << "Character constructor called" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
    std::cout << "Destructor Character called" << std::endl;
}

Character	&Character::operator=(const Character &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		first = NULL;
		for (int i = 0; i < 4; i++)
			this->materias[i] = obj.materias[i]->clone();
	}
	std::cout << "Assignment Character called" << std::endl;
	return (*this);
}

// -------------------------------- GET ----------------------------------------
std::string const	&Character::getName() const
{
	return (name);
}

// ------------------------------- METHODS -------------------------------------
void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] == NULL)
			this->materias[i] = m;
	}
}

void	Character::unequip(int idx)
{
	while (first->next != NULL)
	{
		first = first->next;
	}
	Node *new_item;
	new_item->mat = this->materias[idx];
	new_item->prev = first;
	first->next = new_item;
	
	this->materias[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (!this->materias[idx])
		std::cout << "no materias" << std::endl;
	else
		this->materias[idx]->use(target);
}