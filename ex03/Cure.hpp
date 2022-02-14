#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};
#endif
