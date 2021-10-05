#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "iostream"

class Cat : public Animal
{
public:
	/*
	 *  Constructor
	 */
	Cat();
	Cat(const Cat&);

	/*
	 *  Operator overlord
	 */
	Cat& operator=(const Cat&);

	/*
	 *  Func-member
	 */
	virtual void makeSound() const;

	virtual ~Cat();
private:
};

#endif
