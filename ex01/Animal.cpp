#include "Animal.hpp"

/*
 *  Constructor
 */
Animal::Animal()
{
	std::cout << "Animal constructor was worked" << std::endl;
}

Animal::Animal(std::string const& type) : type(type)
{
	std::cout << "Animal(string) constructor was worked" << std::endl;
}

Animal::Animal(const Animal& a) : type(a.type)
{
	std::cout << "Animal copy constructor was worked" << std::endl;
}

/*
 *  Operator overlord
 */
Animal& Animal::operator=(const Animal& a)
{
	std::cout << "Animal operator = was worked" << std::endl;
	if (this == &a)
		return (*this);
	this->type = a.type;
	return (*this);
}

/*
 *  Func-member
 */
void Animal::makeSound() const
{
	std::cout << "*ANIMAL* voice" << std::endl;
}

std::string const&	Animal::getType() const
{
	return (this->type);
}

Animal::~Animal()
{
	std::cout << "Animal destructor was worked" << std::endl;
}