#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "string"
#include "cstddef"

class Character : public ICharacter
{
public:
	/*
	 *  Constuctor
	 */
	explicit Character(std::string const&);
	Character(Character const&);

	/*
	 *  Operator overlord
	 */
	Character& operator=(Character const&);

	/*
	 *  Func-member
	 */
	virtual std::string const&	getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);

	virtual ~Character();

private:
	AMateria	*materia_slot[4];
	std::string	name;
};


#endif
