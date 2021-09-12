#include "Dog.hpp"

/*
 *  Constructor
 */
Dog::Dog() : Animal("Dog"), brain(new Brain)
{
	std::cout << "Dog constructor was worked" << std::endl;
}

Dog::Dog(Dog const& obj) : Animal(obj.getType())
{
	std::cout << "Dog copy constructor was worked" << std::endl;
	this->brain = obj.brain;
}

/*
 * Operator overlord
 */
Dog&	Dog::operator=(Dog const& obj)
{
	std::cout << "Dog operator = was worked" << std::endl;
	if (this == &obj)
		return (*this);
	this->set_type(obj.getType());
	*(this->brain) = *(obj.brain);
	return (*this);
}

/*
 *  Func-member
 */

void Dog::makeSound() const
{
	std::cout << "WOof!" << std::endl;
}

Brain const&	Dog::get_brain() const
{
	return (*this->brain);
}

void			Dog::set_brain_ideas(std::string idea)
{
	brain->add_ideas(idea);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor was worked" << std::endl;
}