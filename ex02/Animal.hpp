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

	/*
	 * Operator overlord
	 */
	Animal& operator=(Animal const&);

	/*
	*  Func-member
	*/
	virtual void				makeSound() const = 0;
	std::string const&			getType() const;
	void 						set_type(std::string const&);

	virtual ~Animal();
private:
	std::string type;
};

#endif
