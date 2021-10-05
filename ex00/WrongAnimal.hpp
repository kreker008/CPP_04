#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "string"
#include "iostream"

class WrongAnimal
{
public:
	/*
	 *  Constructor
	 */
	WrongAnimal();
	WrongAnimal(std::string const& type);
	WrongAnimal(const WrongAnimal&);

	/*
	 *  Operator overlord
	 */
	WrongAnimal& operator=(const WrongAnimal& wa);

	/*
	 *  Func-member
	 */
	void makeSound();
	std::string const&	getType() const;

	~WrongAnimal();
private:
	std::string type;
};

#endif
