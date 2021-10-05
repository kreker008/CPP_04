#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "iostream"

class Dog : public Animal
{
public:
	/*
	 *  Constructor
	 */
	Dog();
	Dog(const Dog&);

	/*
	 *  Operator overlord
	 */
	Dog& operator=(const Dog&);

	/*
	 *  Func-member
	 */
	virtual void makeSound() const;

	virtual ~Dog();
private:
};

#endif
