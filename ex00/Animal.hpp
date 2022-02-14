#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &animal);
		~Animal(void);
		Animal	&operator=(Animal const &animal);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
	protected:
		std::string	_type;
};
#endif
