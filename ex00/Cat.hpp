#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &cat);
		~Cat(void);
		Cat	&operator=(Cat const &cat);

		std::string	getType(void) const;
		void		makeSound(void) const;
	protected:
		std::string	_type;
};
#endif
