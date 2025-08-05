/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:46:12 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/05 18:44:20 by dvauthey         ###   ########.fr       */
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
		{
			delete this->materias[i];
			this->materias[i] = NULL;
		}
	}
	if (first)
	{
		while (first->next)
			first = first->next;
		while (first->prev)
		{
			first = first->prev;
			delete first->next;
			first->next = NULL;
		}
	}
    std::cout << "Destructor Character " << this->name << " called" << std::endl;
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
	return (this->name);
}

// ------------------------------- METHODS -------------------------------------
void	Character::equip(AMateria *m)
{
	int i = 0;

	while (i < 4 && this->materias[i])
		i++;
	if (i < 4)
		this->materias[i] = m;
	else
		std::cout << "There is no place for a new materia in the inventory" << std::endl;
}

void	Character::unequip(int idx)
{
	while (first->next != NULL)
	{
		first = first->next;
	}
	Node *new_item = new Node;
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