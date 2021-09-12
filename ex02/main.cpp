#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	using std::cout;
	using std::endl;
	Animal* animal[10];

	for(int i = 0; i < 5; ++i)
		animal[i] = new Cat();
	for(int i = 5; i < 10; ++i)
		animal[i] = new Dog();

	animal[0]->makeSound();
	cout << animal[0]->getType() << endl;
	cout << "!!!!!!!!" << endl;
	*(animal[0]) = *(animal[5]);
	cout << "!!!!!!!!" << endl;
	animal[0]->makeSound();
	cout << animal[0]->getType() << endl << endl;

	Dog dg1, dg2;
	Cat ct1, ct2;

	dg1.set_brain_ideas("IM dog?");
	ct1.set_brain_ideas("IM cat?");

	cout << endl;
	cout << "Cat1 brain adress" << &ct1.get_brain() << endl;
	cout << "Cat2 brain adress" << &ct2.get_brain() << endl;
	ct1.get_brain().show_all_ideas();
	ct2.get_brain().show_all_ideas();
	ct2 = ct1;
	ct1.get_brain().show_all_ideas();
	ct2.get_brain().show_all_ideas();
	cout << "Cat1 brain adress" << &ct1.get_brain() << endl;
	cout << "Cat2 brain adress" << &ct2.get_brain() << endl << endl;


	cout << "Dog1 brain adress" << &dg1.get_brain() << endl;
	cout << "Dog2 brain adress" << &dg2.get_brain() << endl;
	dg1.get_brain().show_all_ideas();
	dg2.get_brain().show_all_ideas();
	dg2 = dg1;
	dg1.get_brain().show_all_ideas();
	dg2.get_brain().show_all_ideas();
	cout << "Dog1 brain adress" << &dg1.get_brain() << endl;
	cout << "Dog2 brain adress" << &dg2.get_brain() << endl << endl;

	for(int i = 0; i < 10; ++i)
		delete animal[i];
	return (0);
}