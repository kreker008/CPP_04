#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "string"
#include "iostream"

class Animal
{
public:
	/*
	 *  Constructor
	 */
	Animal();
	Animal(std::string const&);

	/*
	 *  Func-member
	 */
	virtual void				makeSound() const;
	virtual std::string const&	getType() const;

	/*
	 * Operator overlord
	 */
	Animal& operator=(Animal const&);

	virtual ~Animal();
private:
	std::string type;
};

#endif
