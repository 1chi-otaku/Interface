#include"Animal.h"
using namespace std;

int main()
{
	Animal* ptr = new Cat("Karasik", 5, "Europe");
	ptr->Print();
	ptr->Eat();
	ptr->Move();
	delete ptr;
	cout << endl;
	ptr = new Dog("Karasik2", 10, "Asia");
	ptr->Print();
	ptr->Eat();
	ptr->Move();
	delete ptr;

	Pinguin* ptr2 = new Pinguin("Bob", 4, "Australia");

	cout << endl;
	ptr2->Print();
	ptr2->Eat();
	ptr2->Move();
	ptr2->Swim();
	delete ptr2;

	Dolphin* ptr3 = new Dolphin("Kroob", 55, "S.America");

	cout << endl;
	ptr3->Print();
	ptr3->Eat();
	ptr3->Move();
	ptr3->Swim();
	delete ptr3;


	return 0;
}