#include "Dog.hpp"

/*
 *  Constructor
 */
Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor was worked" << std::endl;
}

Dog::Dog(const Dog& d) : Animal(d.getType())
{
	std::cout << "Dog copy constructor was worked" << std::endl;
}

/*
 *  Operator overlord
 */
Dog& Dog::operator=(const Dog& d)
{
	if (this == &d)
		return (*this);
	static_cast<Animal&>(*this) = static_cast<const Animal&>(d);
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
	std::cout << "Dog destructor was worked" << std::endl;
}