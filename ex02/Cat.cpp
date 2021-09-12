#include "Cat.hpp"

/*
 *  Constructor
 */
Cat::Cat() : Animal("Cat"), brain(new Brain)
{
	std::cout << "Cat constructor was worked" << std::endl;
}

Cat::Cat(Cat const& obj) : Animal(obj.getType())
{
	std::cout << "Cat copy constructor was worked" << std::endl;
	this->brain = obj.brain;
}

/*
 * Operator overlord
 */
Cat&	Cat::operator=(Cat const& obj)
{
	std::cout << "Cat operator = was worked" << std::endl;
	if (this == &obj)
		return (*this);
	this->set_type(obj.getType());
	*(this->brain) = *(obj.brain);
	return (*this);
}

/*
 *  Func-member
 */

void Cat::makeSound() const
{
	std::cout << "MEoww!" << std::endl;
}

Brain const&	Cat::get_brain() const
{
	return (*this->brain);
}

void			Cat::set_brain_ideas(std::string idea)
{
	brain->add_ideas(idea);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor was worked" << std::endl;
}