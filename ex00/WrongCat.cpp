/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:16:12 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/15 16:19:02 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

WrongCat::WrongCat()
: WrongAnimal("WrongCat")
{
    std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
: WrongAnimal(other.type)
{
    std::cout << "Copy WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "Assignment WrongCat called" << std::endl;
	return (*this);
}

// ------------------------------------- METHODS --------------------------------------------

void	WrongCat::makeSound() const
{
	std::cout << "Miaw" << std::endl;
}