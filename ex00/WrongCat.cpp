#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &cat)
{
	std::cout << "WrongCat copy" << std::endl;
	*this = cat;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &cat)
{
	this->_type = cat._type;
	return (*this);
}

std::string	WrongCat::getType(void) const
{
	return (this->_type);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}
