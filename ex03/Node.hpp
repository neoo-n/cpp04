/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:46:01 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/04 17:10:09 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODE_HPP
# define NODE_HPP

# include <iostream>
# include "AMateria.hpp"

class Node
{
    public:
		AMateria	*mat;
		Node		*prev;
		Node		*next;

        Node();
        Node(const Node &cpy);
        ~Node();
        Node &operator=(const Node &obj);
};

#endif
