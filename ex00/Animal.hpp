/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:12:45 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/15 11:58:22 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
		std::string	type;

    public:
        Animal();
        Animal(const Animal& cpy);
        Animal(const std::string type);
        ~Animal();
        Animal &operator=(const Animal& rhs);

		virtual void 	makeSound() = 0;
};

#endif
