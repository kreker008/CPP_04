#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "string"
#include "iostream"

class WrongAnimal
{
public:
	/*
	 *  Constructor
	 */
	WrongAnimal();

	/*
	 *  Func-member
	 */
	void makeSound();

	~WrongAnimal();
private:
	std::string type;
};

#endif
