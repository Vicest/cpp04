#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : _brain(new Brain())
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
	delete this->_brain;
}

Cat	&Cat::operator=(Cat const &cat)
{
	this->_type = cat._type;
	this->_brain = new Brain(*(cat._brain));
	return (*this);
}

void	Cat::think(int i, std::string thought)
{
	this->_brain->setIdea(i, thought);
}

std::string	Cat::showIdea(int i) const
{
	return (this->_brain->getIdea(i));
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}
