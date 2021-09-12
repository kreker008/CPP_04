#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : AMateria
{
public:
	/*
	 *  Constructor
	 */
	Ice();
private:
	/*
	 *  Func-member
	 */
	virtual void		use(ICharacter& target);
	virtual AMateria*	clone() const;

	~Ice();

	/*
	 *  Operator overlord
	 */
	Ice& operator=(const Ice&);
};

#endif
