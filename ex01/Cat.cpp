#include "Cat.hpp"

/*
 *  Constructor
 */
Cat::Cat() : Animal("Cat"), brain(new Brain)
{
	std::cout << "Cat constructor was worked" << std::endl;
}

/*
 *  Func-member
 */

void Cat::makeSound() const
{
	std::cout << "MEoww!" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor was worked" << std::endl;
}