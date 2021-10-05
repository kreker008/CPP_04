#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "iostream"

class Cat : public Animal
{
public:
	/*
	 *  Constructor
	 */
	Cat();
	Cat(const Cat&);

	/*
	 *  Operator overlord
	 */
	Cat& operator=(const Cat&);

	/*
	 *  Func-member
	 */
	virtual void	makeSound() const;
	Brain const&	get_brain() const;
	void			set_brain_ideas(std::string);

	virtual ~Cat();
private:
	Brain*		brain;
};

#endif
