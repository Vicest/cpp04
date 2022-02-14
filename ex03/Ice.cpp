#include "Ice.hpp"

AMateria	*Ice::Clone(void)
{
	return (new Ice(*this));
}
void	use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
		<< " *" << std::endl;
}
