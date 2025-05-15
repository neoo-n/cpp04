/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:32:33 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/14 15:06:37 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
    private:

    public:
        Cat(void);
        Cat(const Cat&other);
        ~Cat(void);
        Cat &operator=(const Cat&obj);
};

#endif
