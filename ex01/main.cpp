#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	{
		const Cat*	i = new Cat();
		const Dog*	j = new Dog();
		//const Animal*	k = new Animal(*i); //¡PURIFIED!
		Cat	*	garfield = new Cat();
		Cat	*	doraemon = new Cat(*garfield);
		Cat	*	copycat = garfield ;

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		garfield->think(0, "lasagna");
		doraemon->think(0, "dorayakis");
		std::cout << garfield->showIdea(0) << " " << std::endl;
		std::cout << doraemon->showIdea(0) << " " << std::endl;
		std::cout << copycat->showIdea(0) << " " << std::endl;
		copycat->think(42, "catnip for the cat god");
		std::cout << garfield->showIdea(42) << " " << std::endl;
		std::cout << doraemon->showIdea(42) << " " << std::endl;
		std::cout << copycat->showIdea(42) << " " << std::endl;
		copycat->think(0, "food");
		std::cout << garfield->showIdea(0) << " " << std::endl;
		std::cout << doraemon->showIdea(0) << " " << std::endl;
		std::cout << copycat->showIdea(0) << " " << std::endl;
		i->makeSound();
		j->makeSound();
		//k->makeSound();
		garfield->makeSound();
		doraemon->makeSound();
		delete i;
		delete j;
		//delete k;
		delete garfield;
		delete doraemon;
		(void)copycat;
		//delete copycat; This will segf;
		system("leaks -q main");
	}
}
