#include "Dog.hpp"

/*
 *  Constructor
 */
Dog::Dog() : Animal("Dog"), brain(new Brain)
{
	std::cout << "Dog constructor was worked" << std::endl;

}

Dog::Dog(Dog const& obj)  : Animal(obj.getType())
{
	std::cout << "Dog copy constructor was worked" << std::endl;
	this->brain = obj.brain;
}

/*
 * Operator overlord
 */
Dog &	Dog::operator=(Dog const& obj)
{
	if (this == &obj)
		return (*this);
	this->brain = obj.brain;
	return (*this);
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
	delete brain;
	std::cout << "Dog destructor was worked" << std::endl;
}