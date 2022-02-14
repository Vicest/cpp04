#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _n_materias(0), _materias({0, 0, 0, 0}){}

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
}

void	MateriaSource::learnMateria(AMateria *new_amateria)
{
	if (this->_n_materias < 4)
		this->_materias[this->_n_materias++] = new_amateria;
}

AMateria	*createMateria(std::string const &type)
{
	AMateria	*requested_materia = NULL;

	for(unsigned int i = 4; i > 0; i--)
	{
		if (this->_materias[i].getType().compare(type) == 0)
			requested_materia = this->_materias[i];
	}
	if (requested_materia)
		requested_materia = requested_materia.clone();
	return (requested_materia);
}
