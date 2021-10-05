#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	/*
	 *  Constructor
	 */
	Ice();
	Ice(const Ice&);

	virtual ~Ice();
private:
	/*
	 *  Func-member
	 */
	virtual void		use(ICharacter& target);
	virtual AMateria*	clone() const;

	/*
	 *  Operator overlord
	 */
	Ice& operator=(const Ice&);
};

#endif
