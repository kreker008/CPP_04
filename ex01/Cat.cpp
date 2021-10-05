#include "Cat.hpp"

/*
 *  Constructor
 */
Cat::Cat() : Animal("Cat"), brain(new Brain)
{
	std::cout << "Cat constructor was worked" << std::endl;
}

Cat::Cat(Cat const& obj) : Animal(obj.getType()), brain(new Brain)
{
	std::cout << "Cat copy constructor was worked" << std::endl;
	*(this->brain) = *(obj.brain);
}

/*
 *  Operator overlord
 */
Cat& Cat::operator=(const Cat& c)
{
	if (this == &c)
		return (*this);
	static_cast<Animal&>(*this) = static_cast<const Animal&>(c);
	*(this->brain) = *(c.brain);
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