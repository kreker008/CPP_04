#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "iostream"

class Cat : public Animal
{
public:
	/*
	 *  Constructor
	 */
	Cat();

	/*
	 *  Func-member
	 */
	void makeSound() const;

	~Cat();
private:
	Brain*		brain;
};

#endif
