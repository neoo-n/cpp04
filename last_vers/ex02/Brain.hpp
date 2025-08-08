/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:37:18 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/21 15:35:09 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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

		std::string	*getIdeas();
		void	setIdea(const std::string n_idea, int index);
};

#endif
