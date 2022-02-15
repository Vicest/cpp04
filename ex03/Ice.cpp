#include "Ice.hpp"
#include <iostream>

Ice::Ice(void)
{
	this->_type = "ice";
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
		<< " *" << std::endl;
}
