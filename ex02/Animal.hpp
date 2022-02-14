#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &animal);
		virtual	~Animal(void);
		Animal	&operator=(Animal const &animal);

		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;
	protected:
		std::string	_type;
};
#endif
