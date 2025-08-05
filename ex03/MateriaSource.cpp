/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:34:57 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/05 13:58:59 by dvauthey         ###   ########.fr       */
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
		delete this->materias[i];
    std::cout << "Destructor MateriaSource called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	std::cout << "Assignment MateriaSource called" << std::endl;
}

