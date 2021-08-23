#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "iostream"

class WrongCat : WrongAnimal
{
public:
	/*
	 *  Constructor
	 */
	WrongCat();

	/*
	 *  Func-member
	 */
	void makeSound();

	~WrongCat();
private:
	std::string type;
};

#endif
