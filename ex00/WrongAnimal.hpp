#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &animal);
		~WrongAnimal(void);
		WrongAnimal	&operator=(WrongAnimal const &animal);

		std::string	getType(void) const;
		void		makeSound(void) const;
	protected:
		std::string	_type;
};
#endif
