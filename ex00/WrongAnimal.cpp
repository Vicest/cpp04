#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor" << std::endl;
	this->_type = "Generic";
}

WrongAnimal::WrongAnimal(WrongAnimal const &animal)
{
	std::cout << "WrongAnimal copy" << std::endl;
	*this = animal;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &animal)
{
	this->_type = animal._type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*silence*" << std::endl;
}
