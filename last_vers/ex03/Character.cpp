/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:46:12 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/07 15:48:04 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Character::Character()
: name("none"), first(NULL)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
    std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(const Character &cpy)
: name(cpy.name), first(NULL)
{
	for (int i = 0; i < 4; i++)
	{
		if (cpy.materias[i])
			this->materias[i] = cpy.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
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
		delete first->mat;
		first->mat = NULL;
		while (first->prev)
		{
			first = first->prev;
			delete first->mat;
			first->mat = NULL;
			delete first->next;
			first->next = NULL;
		}
		delete first;
		first = NULL;
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
		{
			if (obj.materias[i])
				this->materias[i] = obj.materias[i]->clone();
			else
				this->materias[i] = NULL;
		}
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

	if (!m)
	{
		std::cout << "There is no materia to equip" << std::endl;
		return ;
	}
	while (i < 4 && this->materias[i])
		i++;
	if (i < 4)
		this->materias[i] = m;
	else
	{
		std::cout << "There is no place for a new materia in the inventory" << std::endl;
		if (m)
		{
			delete m;
			m = NULL;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || !this->materias[idx])
		return ;
	if (first)
	{
		while (first->next != NULL)
			first = first->next;
		Node *new_item = new Node;
		new_item->mat = this->materias[idx];
		new_item->prev = first;
		first->next = new_item;
		while (first->prev)
			first = first->prev;
	}
	else
	{
		first = new Node;
		first->mat = this->materias[idx];
		first->prev = NULL;
		first->next = NULL;
	}
	
	this->materias[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || !this->materias[idx])
		std::cout << "no materias" << std::endl;
	else
		this->materias[idx]->use(target);
}