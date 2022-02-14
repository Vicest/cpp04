#include "AMateria.hpp"
#include <strings>

AMateria::AMateria(void) : _type("(Empty)"){}
AMateria::AMateria(std::string const &type) : _type(type){}
AMateria::AMateria(AMateria const &amateria)
{
	*this = amateria;
}
AMateria::~AMateria(void){}
AMateria	&AMateria::operator=(AMateria const &amateria)
{
	this->type = amateria.getType();
}

std::string	AMateria::getType(void) const
{
	return (this->_type);
}
