#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "string"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;

	ICharacter* me = new Character("me");
	std::cout << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;
	delete me;
	delete src;
	std::cout << std::endl;

	Character mark("mark");
	std::cout << std::endl;

	mark.equip(new Ice());
	std::cout << std::endl;

	Character mark_clone = mark;
	std::cout << std::endl;

	mark_clone.use(0, *bob);
	std::cout << std::endl;

	Character nothing("nothing");

	nothing = mark;

	nothing.use(0, *bob);
	return 0;
}
