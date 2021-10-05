#include "Dog.hpp"

/*
 *  Constructor
 */
Dog::Dog() : Animal("Dog"), brain(new Brain)
{
	std::cout << "Dog constructor was worked" << std::endl;
}

Dog::Dog(Dog const& obj) : Animal(obj.getType()), brain(new Brain)
{
	std::cout << "Dog copy constructor was worked" << std::endl;
	*(this->brain) = *(obj.brain);
}

/*
 *  Operator overlord
 */
Dog& Dog::operator=(const Dog& d)
{
	if (this == &d)
		return (*this);
	static_cast<Animal&>(*this) = static_cast<const Animal&>(d);
	*(this->brain) = *(d.brain);
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