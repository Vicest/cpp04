#include "Character.hpp"

#include <iostream>
Character::Character(void)
	: _name("Charname"), _n_inventory(0)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name)
	: _name(name), _n_inventory(0)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &character)
{
	*this = character;
}

Character::~Character(void){}

Character	&Character::operator=(Character const &character)
{
	this->_name = character._name;
	this->_n_inventory = character._n_inventory;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = character._inventory[i];
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (this->_n_inventory < 4)
		this->_inventory[this->_n_inventory++] = m;
}

void	Character::unequip(int idx)
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

void	Character::use(int idx, ICharacter &target)
{
	AMateria	*materia_chosen = NULL;

	if (idx >= 0 && idx < this->_n_inventory)
		materia_chosen = this->_inventory[idx];
	if (materia_chosen)
		materia_chosen->use(target);
}
