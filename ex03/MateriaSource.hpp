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

	/*
	 *  Func-member
	 */
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);

	~MateriaSource();
private:
	AMateria	*materia_source[4];
};

#endif
