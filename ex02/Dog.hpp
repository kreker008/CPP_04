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
	explicit Dog(Dog const&);

	/*
	 * Operator overlord
	 */
	Dog&	operator=(Dog const&);

	/*
	 *  Func-member
	 */
	void			makeSound() const;
	Brain const&	get_brain() const;
	void			set_brain_ideas(std::string);

	~Dog();
private:
	Brain*		brain;
};

#endif
