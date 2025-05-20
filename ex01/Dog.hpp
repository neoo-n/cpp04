/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:32:19 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/20 17:24:10 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
		
    public:
        Dog();
        Dog(const Dog &other);
        ~Dog();
        Dog &operator=(const Dog &obj);

		Brain	getBrain() const;
		void	setBrain(const Brain n_brain);

		void	makeSound() const;
};

#endif
