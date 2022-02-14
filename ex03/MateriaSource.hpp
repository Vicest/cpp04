#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		unsigned int	_n_materias;
		AMateria		*_materias[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &ms);
		~MateriaSource(void);
		MateriaSource	&operator=(MateriaSource const &ms);
		void			learnMateria(AMateria *new_amateria);
		AMateria*		createMateria(std::string const &type);
};
#endif
