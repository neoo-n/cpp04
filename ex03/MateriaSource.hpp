/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:35:02 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/05 16:36:59 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
		AMateria	*materias[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource &cpy);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &obj);

		void learnMateria(AMateria* mat);
		AMateria* createMateria(std::string const & type);
};

#endif
