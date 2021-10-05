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
	Dog(const Dog&);

	/*
	 *  Operator overlord
	 */
	Dog& operator=(const Dog&);

	/*
	 *  Func-member
	 */
	virtual void makeSound() const;
	Brain const&	get_brain() const;
	void			set_brain_ideas(std::string);

	virtual ~Dog();
private:
	Brain*		brain;
};

#endif
