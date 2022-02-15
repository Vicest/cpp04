#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		Character(void);

		std::string	_name;
		int			_n_inventory;
		AMateria	*_inventory[4];
	public:
		Character(std::string name);
		Character(Character const &character);
		~Character(void);
		Character			&operator=(Character const &character);
		std::string const	&getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};
#endif
