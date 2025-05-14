/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:12:45 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/14 14:26:45 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
		std::string	type;

    public:
        Animal(void);
        Animal(const Animal& cpy);
        ~Animal(void);
        Animal &operator=(const Animal& rhs);

		virtual void	makeSound(void) = 0;
};

#endif
