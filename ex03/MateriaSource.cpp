/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:34:57 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/05 18:41:08 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materias[i] =  NULL;
    std::cout << "Default MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = cpy.materias[i]->clone();
    std::cout << "Copy MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
		{
			delete this->materias[i];
			this->materias[i] = NULL;
		}
	}
    std::cout << "Destructor MateriaSource called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
			this->materias[i] = obj.materias[i]->clone();
	}
	std::cout << "Assignment MateriaSource called" << std::endl;
	return (*this);
}

// ------------------------------- METHODS -------------------------------------
void	MateriaSource::learnMateria(AMateria* mat)
{
	int i = 0;

	if (!mat)
	{
		std::cout << "There is no materia to learn" << std::endl;
		return ;
	}
	while (i < 4 && this->materias[i])
		i++;
	if (i < 4)
		this->materias[i] = mat;
	else
		std::cout << "There is no place for a new materia to learn" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == this->materias[i]->getType())
			return (this->materias[i]->clone());
	}
	std::cout << "There is no materia to create" << std::endl;
	return (0);
}