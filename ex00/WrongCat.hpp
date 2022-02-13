#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const &cat);
		~WrongCat(void);
		WrongCat	&operator=(WrongCat const &cat);

		std::string	getType(void) const;
		void		makeSound(void) const;
	protected:
		std::string	_type;
};
#endif
