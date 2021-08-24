#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "iostream"

class Dog : virtual public Animal
{
public:
	/*
	 *  Constructor
	 */
	Dog();
	Dog(Dog const&);

	/*
	 * Operator overlord
	 */
	Dog&	operator=(Dog const&);

	/*
	 *  Func-member
	 */
	void makeSound() const;

	~Dog();
private:
	Brain*		brain;
};

#endif
