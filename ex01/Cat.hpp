/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:32:33 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/20 16:26:26 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;

    public:
        Cat();
        Cat(const Cat&other);
        ~Cat();
        Cat &operator=(const Cat&obj);

		Brain	getBrain() const;
		void	setBrain(const Brain n_brain);

		void	makeSound() const;
};

#endif
