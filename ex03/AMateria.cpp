#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : type(type){}

const std::string& AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "*AMATERIA USE* do something with target" << target.getName() << std::endl;
}

AMateria::~AMateria(){}
