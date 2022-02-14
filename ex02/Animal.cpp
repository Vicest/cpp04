#include <iostream>
#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor" << std::endl;
	this->_type = "Generic";
}

Animal::Animal(Animal const &animal)
{
	std::cout << "Animal copy" << std::endl;
	*this = animal;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor" << std::endl;
}

Animal	&Animal::operator=(Animal const &animal)
{
	this->_type = animal._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
