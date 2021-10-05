#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "iostream"

class WrongCat : public WrongAnimal
{
public:
	/*
	 *  Constructor
	 */
	WrongCat();
	WrongCat(const WrongCat&);

	/*
	 *  Operator overlord
	 */
	WrongCat& operator=(const WrongCat&);

	/*
	 *  Func-member
	 */
	void makeSound();

	~WrongCat();
private:
	std::string type;
};

#endif
