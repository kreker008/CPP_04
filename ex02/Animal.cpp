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

/*
 * Operator overlord
 */
Animal& Animal::operator=(Animal const& obj)
{
	std::cout << "Animal operator = was worked" << std::endl;
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

void	Animal::set_type(std::string const &type)
{
	this->type = type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor was worked" << std::endl;
}