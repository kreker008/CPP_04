#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "iostream"

class Cat : virtual public Animal
{
public:
	/*
	 *  Constructor
	 */
	Cat();
	Cat(Cat const&);

	/*
	 * Operator overlord
	 */
	Cat &	operator=(Cat const&);

	/*
	 *  Func-member
	 */
	void makeSound() const;

	~Cat();
private:
	Brain*		brain;
};

#endif
