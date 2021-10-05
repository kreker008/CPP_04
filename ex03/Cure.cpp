#include "Cure.hpp"

/*
 *  Constructor
 */
Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor was worked" << std::endl;
}

Cure::Cure(const Cure& c) : AMateria(c.getType())
{
	std::cout << "Cure constructor was worked" << std::endl;
}

/*
 *  Operator overlord
 */
Cure& Cure::operator=(const Cure&) {return (*this);} // privat unused func

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

Cure::~Cure()
{
	std::cout << "Cure destructor was worked" << std::endl;
}

