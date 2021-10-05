#include "Character.hpp"

/*
 *  Constructor
 */
Character::Character(std::string const& name) : name(name)
{
	std::cout << "Character constructor was worked" << std::endl;
	for(int i = 0; i < 4; ++i)
		materia_slot[i] = NULL;
}

Character::Character(Character const& obj) : name(obj.name)
{
	std::cout << "Character copy constructor was worked" << std::endl;
	for(int i = 0; i < 4; ++i)
		if (obj.materia_slot[i] != NULL)
			this->materia_slot[i] = obj.materia_slot[i]->clone();
}

/*
 *  Operator overlord
 */
Character& Character::operator=(Character const& obj)
{
	if (this == &obj)
		return (*this);
	this->name = obj.name;
	for(int i = 0; i < 4; ++i)
	{
		if (this->materia_slot[i] != obj.materia_slot[i] &&
			this->materia_slot[i] != NULL)
		{
			delete this->materia_slot[i];
			materia_slot[i] = NULL;
		}
		if (obj.materia_slot[i] != NULL)
			this->materia_slot[i] = obj.materia_slot[i]->clone();
	}
	return (*this);
}

/*
 *  Func-member
 */
std::string const& Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	int i = 0;

	for(; i < 4; ++i)
		if (materia_slot[i] == NULL)
		{
			materia_slot[i] = m;
			break;
		}
	if (i == 4)
		std::cout << "No empty slot" << std::endl;
	else
		std::cout << getName() << " is equip new materia in slot №"
		<< i << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid index" << std::endl;
	if (materia_slot[idx] == NULL)
		std::cout << "This slot is empty" << std::endl;
	else
	{
		materia_slot[idx] = NULL;
		std::cout << "The slot №" << idx << " was unequip" << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid index" << std::endl;
	if (materia_slot[idx] == NULL)
		std::cout << "This slot is empty" << std::endl;
	else
	{
		std::cout << name << " ";
		materia_slot[idx]->use(target);
	}

}

Character::~Character()
{
	std::cout << "Character destructor was worked" << std::endl;
	for(int i = 0; i < 4; ++i)
		delete materia_slot[i];
}

