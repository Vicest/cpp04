#include "Cure.hpp"

AMateria	*Cure::clone(void)
{
	return (new Cure(*this));
}

void	use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
