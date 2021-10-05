#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "string"
#include "iostream"
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	const std::string type;

	/*
	 *  Operator overlord
	 */
	AMateria& operator=(const AMateria&);

public:
	/*
	 *  Constructor
	 */
	AMateria(std::string const & type);
	AMateria(const AMateria&);

	/*
	 *  Func-member
	 */
	std::string const&	getType() const; //Returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);

	virtual ~AMateria();
};

#endif
