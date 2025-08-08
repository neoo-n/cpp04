
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
		std::string	type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal(const std::string type);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &obj);

		std::string	getType() const;

		void 	makeSound() const;
};

#endif
