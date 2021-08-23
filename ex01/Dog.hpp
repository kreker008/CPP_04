#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "iostream"

class Dog : public Animal
{
public:
	/*
	 *  Constructor
	 */
	Dog();

	/*
	 *  Func-member
	 */
	void makeSound() const;

	~Dog();
private:
	Brain*		brain;
};

#endif
