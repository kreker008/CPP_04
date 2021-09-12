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

	/*
	 *  Operator overlord
	 */
	Brain& operator=(Brain const&);

	/*
	 *  Func-member
	 */
	void	add_ideas(std::string);
	void	show_all_ideas() const;

	~Brain();
private:
	unsigned int	ideas_num;
	std::string		ideas[100];
};


#endif
