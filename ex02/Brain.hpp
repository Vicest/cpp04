#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
class Brain
{
	public:
		Brain(void);
		Brain(Brain const &brain);
		~Brain(void);
		Brain	&operator=(Brain const &brain);

		std::string	getIdea(int i) const;
		void		setIdea(int i, std::string idea);
	private:
		std::string	ideas[100];
};
#endif
