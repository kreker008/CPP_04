#include "Ice.hpp"

/*
 *  Constructor
 */
Ice::Ice() : AMateria("ice")
{

}

/*
 *  Func-member
 */
AMateria* Ice::clone() const
{
	return (new Ice);
}

void Ice::use(ICharacter& target)
{
	std::cout <<  "shoots an ice bolt at "
	<< target.getName() << std::endl;
}

/*
 *  Operator overlord
 */
Ice& Ice::operator=(const Ice&) {} // privat unused func