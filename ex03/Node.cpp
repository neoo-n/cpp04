/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:45:42 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/04 17:10:24 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Node.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Node::Node()
: mat(NULL), prev(NULL), next(NULL) 
{
    std::cout << "Default Node constructor called" << std::endl;
}

Node::Node(const Node &cpy)
: mat(cpy.mat), prev(cpy.prev), next(cpy.next)
{
    std::cout << "Copy Node constructor called" << std::endl;
}

Node::~Node()
{
    std::cout << "Destructor Node called" << std::endl;
}

Node &Node::operator=(const Node &obj)
{
	if (this != &obj)
	{
		this->mat = obj.mat;
		this->prev = obj.prev;
		this->next = obj.next;
	}
	std::cout << "Assignment Node called" << std::endl;
	return (*this);
}
