#include "Cat.hpp"

/*
 *  Constructor
 */
Cat::Cat() : Animal("Cat"), brain(new Brain)
{
	std::cout << "Cat constructor was worked" << std::endl;
}

Cat::Cat(Cat const& obj)  : Animal(obj.getType())
{
	std::cout << "Cat copy constructor was worked" << std::endl;
	this->brain = obj.brain;
}

/*
 * Operator overlord
 */
Cat &	Cat::operator=(Cat const& obj)
{
	if (this == &obj)
		return (*this);
	this->brain = obj.brain;
	return (*this);
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