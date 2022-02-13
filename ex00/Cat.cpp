#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &cat)
{
	std::cout << "Cat copy" << std::endl;
	*this = cat;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor" << std::endl;
}

Cat	&Cat::operator=(Cat const &cat)
{
	this->_type = cat._type;
	return (*this);
}

std::string	Cat::getType(void) const
{
	return (this->_type);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}
