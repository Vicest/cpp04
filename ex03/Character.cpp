#include "Character.hpp"

Character::Character(void)
	: _name("Charname"), _n_inventory(0), _inventory({0, 0, 0, 0}){}
Character::Character(Character const &character)
{
	*this = character;
}
Character::~Character(void){}
Character	&Character::operator=(Character const &character)
{
	this->name = character._name;
	this->_n_inventory = character._n_inventory;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = character._inventory[i];
	return (*this);
}

std::string	getName(void)
{
	return (this->_name);
}

void	equip(AMateria *m)
{
	if (this->_n_inventory < 4)
		this->_inventory[this->_n_inventory++] = m;
}

void	unequip(int idx)
{
	if (idx >= 0 && idx < this->_n_inventory)
	{
		for (int i = idx; i < this->_n_inventory; i++)
		{
			if (i == 4)
				this->_inventory[i] = NULL;
			else
				this->_inventory[i] = this->_inventory[i + 1];
		}
		this->_n_inventory--;
	}
}

void	use(int idx, ICharacter &target)
{
	AMateria	*materia_chosen = NULL;

	if (idx >= 0 && idx < this->_n_inventory)
		materia_chosen = this->_inventory[idx];
	if (materia_chosen)
		materia_chosen->use(target);
}
