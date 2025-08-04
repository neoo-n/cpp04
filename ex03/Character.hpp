
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character
{
	private:
		std::string name;
		AMateria *materias[4];
		AMateria *materias

	public:
		Character();
		Character(const Character &cpy);
		~Character();
		Character &operator=(const Character &obj);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
