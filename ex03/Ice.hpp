#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};
#endif
