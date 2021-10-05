#include "Brain.hpp"

/*
 *  Constructor
 */
Brain::Brain() : ideas_num(0)
{
	std::cout << "Brain constructor was worked" << std::endl;
}

Brain::Brain(const Brain& b) : ideas_num(b.ideas_num)
{
	std::cout << "Brain copy constructor was worked" << std::endl;
	for(int i = 0; i < (int)b.ideas_num; ++i)
		this->ideas[i] = b.ideas_num;
}

/*
 *  Operator overlord
 */
Brain& Brain::operator=(Brain const& obj)
{
	std::cout << "Brain operator = was worked" << std::endl;
	if (this == &obj)
		return (*this);
	this->ideas_num = obj.ideas_num;
	{
		int i = 0;

		for(; i < (int)obj.ideas_num; ++i)
			this->ideas[i] = obj.ideas[i];
		for(; i < 100; ++i)
			ideas[i].clear();
	}
	return (*this);
}

/*
 *  Func-member
 */
void   Brain::add_ideas(std::string idea)
{
	if(ideas_num >= 100)
		std::cout << "So many ideas for me" << std::endl;
	ideas[ideas_num] = idea;
	++ideas_num;
}

void	Brain::show_all_ideas() const
{
	if(ideas_num == 0)
		std::cout << "I have not idea(" << std::endl;
	for(int i = 0; i < (int)ideas_num; ++i)
		std::cout << ideas[i] << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor was worked" << std::endl;
}