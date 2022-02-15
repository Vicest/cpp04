#include "AMateria.hpp"
#include <string>

AMateria::AMateria(void) : _type("(Empty)"){}

AMateria::AMateria(std::string &type) : _type(type){}

AMateria::AMateria(AMateria const &amateria)
{
	*this = amateria;
}

AMateria::~AMateria(void){}

AMateria	&AMateria::operator=(AMateria const &amateria)
{
	this->_type = amateria.getType();
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target){(void)target;}
