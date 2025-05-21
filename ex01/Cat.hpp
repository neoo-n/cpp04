/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:32:33 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/21 15:45:30 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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

		Brain	*getBrain();
		void	setBrain(const std::string idea, int index);

		void	makeSound() const;
};

#endif
