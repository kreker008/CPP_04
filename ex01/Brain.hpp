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

	~Brain();
private:
	std::string ideas[100];
};


#endif
