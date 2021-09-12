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
	explicit Cat(Cat const&);

	/*
	 * Operator overlord
	 */
	Cat&	operator=(Cat const&);
//	Cat&	operator=(Animal const& obj);

	/*
	 *  Func-member
	 */
	void			makeSound() const;
	Brain const&	get_brain() const;
	void			set_brain_ideas(std::string);

	~Cat();
private:
	Brain*		brain;
};

#endif
