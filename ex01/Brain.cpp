#include "Brain.hpp"

Brain::Brain(void){}

Brain::Brain(Brain const &brain)
{
	*this = brain;
}

Brain::~Brain(void){}

Brain	&Brain::operator=(Brain const &brain)
{
	for (int i = 0; i < 100 ; i++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (this->ideas[i]);
	return ("");
}

