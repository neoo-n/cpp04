/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:32:19 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/14 14:32:22 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>

class Dog
{
    private:

    public:
        Dog(void);
        Dog(const Dog&other);
        ~Dog(void);
        Dog &operator=(const Dog&obj);
};

#endif
