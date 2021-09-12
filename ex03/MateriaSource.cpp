#include "MateriaSource.hpp"

/*
 *  Constructor
 */
MateriaSource::MateriaSource()
{
	materia_source[0] = nullptr;
	materia_source[1] = nullptr;
	materia_source[2] = nullptr;
	materia_source[3] = nullptr;
}

/*
 *  Func-member
 */
void MateriaSource::learnMateria(AMateria *materia)
{
	int i = 0;

	for(; i < 4; ++i)
		if (materia_source[i] == nullptr)
		{
			materia_source[i] = materia;
			break;
		}
	if (i == 4)
		std::cout << "No empty slot" << std::endl;
	else
		std::cout << "New materia was create" << std::endl;
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	int i = 0;

	for(; i < 4; ++i)
		if(materia_source[i]->getType() == type)
			return (materia_source[i]->clone());
	std::cout << "Unknown type" << std::endl;
	return (nullptr);
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; ++i)
		delete materia_source[i];
}