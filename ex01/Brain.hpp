/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:37:18 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/20 10:39:51 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    private:
		std::string	ideas[100];

    public:
        Brain();
        Brain(const Brain &other);
        ~Brain();
        Brain &operator=(const Brain &obj);
};

#endif
