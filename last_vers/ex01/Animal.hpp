/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:12:45 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/08 11:54:36 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
    protected:
		std::string	type;

    public:
        Animal();
        Animal(const Animal& cpy);
        Animal(const std::string type);
        virtual ~Animal();
        Animal &operator=(const Animal& rhs);

		std::string		getType() const;
		virtual Brain	*getBrain();
		virtual void	setBrain(const std::string idea, int index);

		virtual void 	makeSound() const;
		virtual void	printBrainIdeas() const;
};

#endif
