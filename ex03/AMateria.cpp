#include "AMateria.hpp"

/*
 *  Constructor
 */
AMateria::AMateria(const std::string& type) : type(type)
{
	std::cout << "AMateria constructor was worked" << std::endl;
}

AMateria::AMateria(const AMateria& am) : type(am.type)
{
	std::cout << "AMateria copy constructor was worked" << std::endl;
}

/*
 *  Operator overlord
 */
AMateria& AMateria::operator=(const AMateria& am) //useless assignment operator
{
	std::cout << "Useless assignment operator was worked" << std::endl;
	(void)am;
	return (*this);
}

const std::string& AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "*AMATERIA USE* do something with target" << target.getName() << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor was worked" << std::endl;
}
