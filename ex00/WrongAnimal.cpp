#include "WrongAnimal.hpp"

/*
 *  Constructor
 */
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor was worked" << std::endl;
}

/*
 *  Func-member
 */
void WrongAnimal::makeSound()
{
	std::cout << "*WrongAnimal* voice" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor was worked" << std::endl;
}