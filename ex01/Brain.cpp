#include "Brain.hpp"

/*
 *  Constructor
 */
Brain::Brain()
{
	std::cout << "Brain constructor was worked" << std::endl;
}

/*
 *  Operator overlord
 */
Brain& Brain::operator=(Brain const& obj)
{
	std::cout << "Brain copy constructor was worked" << std::endl;
	if (this == &obj)
		return (*this);
	for(int i = 0; i < 100; ++i)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor was worked" << std::endl;
}