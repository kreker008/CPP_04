#include "Cure.hpp"

/*
 *  Constructor
 */
Cure::Cure() : AMateria("cure")
{

}

/*
 *  Func-member
 */
AMateria* Cure::clone() const
{
	return (new Cure);
}

void Cure::use(ICharacter& target)
{
	std::cout <<  "heals " << target.getName()
	<< " wound" << std::endl;
}

/*
 *  Operator overlord
 */
Cure& Cure::operator=(const Cure&) {} // privat unused func