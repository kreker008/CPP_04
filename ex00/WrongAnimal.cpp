#include "WrongAnimal.hpp"

/*
 *  Constructor
 */
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor was worked" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const& type) : type(type)
{
	std::cout << "WrongAnimal constructor with string argument was worked" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a) : type(a.type)
{
	std::cout << "WrongAnimal copy constructor was worked" << std::endl;
}

/*
 *  Operator overlord
 */
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wa)
{
	if (this == &wa)
		return (*this);
	this->type = wa.type;
	return (*this);
}

/*
 *  Func-member
 */
void WrongAnimal::makeSound()
{
	std::cout << "*WrongAnimal* voice" << std::endl;
}

std::string const&	WrongAnimal::getType() const
{
	return (this->type);
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor was worked" << std::endl;
}