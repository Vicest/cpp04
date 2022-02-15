#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _n_materias(0)
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &ms)
{
	*this = ms;
}

MateriaSource::~MateriaSource(void){}

MateriaSource	&MateriaSource::operator=(MateriaSource const &ms)
{
	this->_n_materias = ms._n_materias;
	for(unsigned int i = 0; i < 4; i++)
		this->_materias[i] = ms._materias[i];
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *new_amateria)
{
	if (this->_n_materias < 4)
		this->_materias[this->_n_materias++] = new_amateria;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria	*requested_materia = NULL;
	AMateria	*amateria_iter;

	for(unsigned int i = 0; this->_n_materias > i; i++)
	{
		amateria_iter = this->_materias[i];
		if (amateria_iter->getType().compare(type) == 0)
			requested_materia = amateria_iter;
	}
	if (requested_materia)
		requested_materia = requested_materia->clone();
	return (requested_materia);
}
