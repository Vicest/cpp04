#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &dog);
		~Dog(void);
		Dog	&operator=(Dog const &dog);

		std::string	getType(void) const;
		void		makeSound(void) const;
	protected:
		std::string	_type;
};
#endif
