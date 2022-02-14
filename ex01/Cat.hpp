#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &cat);
		~Cat(void);
		Cat	&operator=(Cat const &cat);

		void		think(int i, std::string thought);
		std::string	showIdea(int i) const;
		void		makeSound(void) const;
	private:
		Brain	*_brain;
};
#endif
