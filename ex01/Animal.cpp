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

}

/*
 * Operator overlord
 */
Animal& Animal::operator=(Animal const& obj)
{
	if (this == &obj)
		return (*this);
	this->type = obj.type;
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