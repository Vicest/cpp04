#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include "ICharacter.hpp"

class AMateria
{
protected:
	const std::string	_type;
public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria(AMateria const &amateria);
	~AMateria(void);
	AMateria	&operator=(AMateria const &amateria);

	std::string const	&getType(void) const;
	virtual AMateria*	clone(void) const = 0;
	virtual void		use(ICharacter &target);
};
#endif
