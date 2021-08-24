#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal[10];

	for(int i = 0; i < 5; ++i)
		animal[i] = new Cat();
	for(int i = 5; i < 10; ++i)
		animal[i] = new Dog();

	animal[0]->makeSound();
	animal[0] = 5[animal];
	animal[0]->makeSound();

	for(int i = 0; i < 10; ++i)
		delete animal[i];
	return (0);
}