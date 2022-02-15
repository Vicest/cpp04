#include "Cure.hpp"
#include <iostream>

Cure::Cure(void)
{
	this->_type = "cure";
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
