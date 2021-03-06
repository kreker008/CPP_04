#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	/*
	 *  Constructor
	 */
	Cure();
	Cure(const Cure&);

	virtual ~Cure();
private:
	/*
	*  Operator overlord
	*/
	Cure& operator=(const Cure&);

	/*
	 *  Func-member
	 */
	virtual void		use(ICharacter& target);
	virtual AMateria*	clone() const;
};

#endif
