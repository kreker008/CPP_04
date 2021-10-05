#include "Ice.hpp"

/*
 *  Constructor
 */
Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor was worked" << std::endl;
}

Ice::Ice(const Ice& i) : AMateria(i.getType())
{
	std::cout << "Ice constructor was worked" << std::endl;
}

/*
 *  Operator overlord
 */
Ice& Ice::operator=(const Ice&) {return (*this);} // privat unused func

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

Ice::~Ice()
{
	std::cout << "Ice destructor was worked" << std::endl;
}

