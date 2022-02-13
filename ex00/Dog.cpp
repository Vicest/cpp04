#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &dog)
{
	std::cout << "Dog copy" << std::endl;
	*this = dog;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor" << std::endl;
}

Dog	&Dog::operator=(Dog const &dog)
{
	this->_type = dog._type;
	return (*this);
}

std::string	Dog::getType(void) const
{
	return (this->_type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}
