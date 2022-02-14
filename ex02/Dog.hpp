#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &dog);
		~Dog(void);
		Dog	&operator=(Dog const &dog);

		void		think(int i, std::string thought);
		std::string	showIdea(int i) const;
		void		makeSound(void) const;
	private:
		Brain	*_brain;
};
#endif
