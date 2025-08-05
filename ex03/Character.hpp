/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:45:35 by dvauthey          #+#    #+#             */
/*   Updated: 2025/08/05 13:37:53 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "Node.hpp"

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*materias[4];
		Node		*first;

	public:
		Character();
		Character(const Character &cpy);
		Character(const std::string &new_name);
		~Character();
		Character &operator=(const Character &obj);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
