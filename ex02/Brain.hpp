#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "string"
#include "iostream"

class Brain
{
public:
	/*
	 *  Constructor
	 */
	Brain();
	Brain(const Brain&);

	/*
	 *  Operator overlord
	 */
	Brain& operator=(Brain const&);

	/*
	 *  Func-member
	 */
	void	show_all_ideas() const;
	void	add_ideas(std::string idea);
	~Brain();
private:
	unsigned int	ideas_num;
	std::string		ideas[100];
};


#endif
