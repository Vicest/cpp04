#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : _brain(new Brain())
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
	delete this->_brain;
}

Dog	&Dog::operator=(Dog const &dog)
{
	this->_type = dog._type;
	this->_brain = dog._brain;
	return (*this);
}

void	Dog::think(int i, std::string thought)
{
	this->_brain->Brain::setIdea(i, thought);
}

std::string	Dog::showIdea(int i) const
{
	return (this->_brain->getIdea(i));
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}
