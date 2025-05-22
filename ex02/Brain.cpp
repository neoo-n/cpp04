/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:37:11 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/21 15:35:05 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Brain.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Brain::Brain()
{
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
: ideas(other.ideas)
{
    std::cout << "Copy Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called" << std::endl;
}

Brain &Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			(this->ideas)[i] = (obj.ideas)[i];
	}
	std::cout << "Assignment Brain called" << std::endl;
	return (*this);
}

// ------------------------------ GET AND SET -------------------------------------
std::string	*Brain::getIdeas()
{
	return (ideas);
}

void	Brain::setIdea(const std::string n_idea, int index)
{
	ideas[index] = n_idea;
}
