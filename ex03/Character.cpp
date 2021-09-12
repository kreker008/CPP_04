#include "Character.hpp"

/*
 *  Constructor
 */
Character::Character(std::string const& name)
{
	for(int i = 0; i < 4; ++i)
		materia_slot[i] = nullptr;
	this->name = name;
}

Character::Character(Character const& obj)
{
	this->name = obj.name;
	for(int i = 0; i < 4; ++i)
		if (obj.materia_slot[i] != nullptr)
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
		if (this->materia_slot[i] != nullptr)
			delete this->materia_slot[i];
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
		if (materia_slot[i] == nullptr)
		{
			materia_slot[i] = m;
			break;
		}
	if (i == 4)
		std::cout << "No empty slot" << std::endl;
	else
		std::cout << getName() << "is equip new materia in slot №"
		<< i << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid index" << std::endl;
	if (materia_slot[idx] == nullptr)
		std::cout << "This slot is empty" << std::endl;
	else
	{
		materia_slot[idx] = nullptr;
		std::cout << "The slot №" << idx << " was unequip" << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid index" << std::endl;
	if (materia_slot[idx] == nullptr)
		std::cout << "This slot is empty" << std::endl;
	else
		materia_slot[idx]->use(target);
}

Character::~Character()
{
	for(int i = 0; i < 4; ++i)
		delete materia_slot[i];
}

