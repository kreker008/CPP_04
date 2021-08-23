#include "WrongCat.hpp"

/*
 *  Constructor
 */
WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor was worked" << std::endl;
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