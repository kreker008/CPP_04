#include "Cat.hpp"

/*
 *  Constructor
 */
Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor was worked" << std::endl;
}

Cat::Cat(const Cat& c) : Animal(c.getType())
{
	std::cout << "Cat copy constructor was worked" << std::endl;
}

/*
 *  Operator overlord
 */
Cat& Cat::operator=(const Cat& c)
{
	if (this == &c)
		return (*this);
	static_cast<Animal&>(*this) = static_cast<const Animal&>(c);
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
	std::cout << "Cat destructor was worked" << std::endl;
}