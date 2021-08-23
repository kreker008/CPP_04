#include "Dog.hpp"

/*
 *  Constructor
 */
Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor was worked" << std::endl;
}

/*
 *  Func-member
 */

void Dog::makeSound() const
{
	std::cout << "WOof!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor was worked" << std::endl;
}