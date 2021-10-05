#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	WrongAnimal* c = new WrongCat;
	c->makeSound();

	Animal a;
	a.makeSound();

	std::cout << std::endl;
	delete meta;
	delete i;
	delete j;
	std::cout << std::endl;
	delete c;
	std::cout << std::endl;

	return (0);
}