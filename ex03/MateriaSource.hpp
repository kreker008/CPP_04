#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	/*
	 *  Constructor
	 */
	MateriaSource();
	MateriaSource(const MateriaSource&);

	/*
	 * Operator overlord
	 */

	/*
	 *  Func-member
	 */
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);

	virtual ~MateriaSource();
private:
	AMateria	*materia_source[4];
};

#endif
