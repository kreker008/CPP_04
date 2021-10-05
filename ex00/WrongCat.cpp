#include "WrongCat.hpp"

/*
 *  Constructor
 */
WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor was worked" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wc) : WrongAnimal(wc.getType())
{
	std::cout << "WrongCat copy constructor was worked" << std::endl;
}

/*
 *  Operator overlord
 */
WrongCat& WrongCat::operator=(const WrongCat& wc)
{
	if (this == &wc)
		return (*this);
	static_cast<WrongAnimal&>(*this) = static_cast<const WrongAnimal&>(wc);
	return (*this);
}

/*
 *  Func-member
 */

void WrongCat::makeSound()
{
	std::cout << "MEoww! *but wrong*" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor was worked" << std::endl;
}