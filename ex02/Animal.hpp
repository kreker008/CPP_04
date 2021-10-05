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
	explicit Animal(std::string const&);
	Animal(const Animal&);

	/*
	 *  Operator overlord
	 */
	Animal& operator=(const Animal&);

	/*
	 *  Func-member
	 */
	virtual void				makeSound() const = 0;
	virtual std::string const&	getType() const;

	virtual ~Animal();
private:
	std::string type;
};

#endif
