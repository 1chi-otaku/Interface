#include"Animal.h"
#include <list>
#include <iostream>
typedef unsigned int uint;
using namespace std;

void PrintMenu();
Animal* CreateAnimal();

int main()
{
	uint input = 1;
	list<Animal*> animals;
	list<Animal*>::iterator list_ptr = animals.begin();
	while (input != 0)
	{
		system("cls");
		PrintMenu();
		cin >> input;
		system("cls");
		switch (input)
		{
		case 1:
			animals.push_back(CreateAnimal());
			system("cls");
			break;
		case 2:
			animals.clear();
			cout << "Success!" << endl;
			system("pause");
			break;



		case 3:
			
			input = 1;
			for (auto ptr = animals.begin(); ptr != animals.end(); ptr++)
			{
				cout << input << ")" << endl;
				(*ptr)->Print();
				cout << endl;
				input++;
			}
			system("pause");


			break;
			5



		case 0:
			break;
		
		default:
			cout << "Something went wrong..." << endl;
			system("pause");
			break;
		}
	}
	
	

}

void PrintMenu()
{
	cout << "############### Animal Simulator! TM ###############" << endl;
	cout << "1 - Add an animal!" << endl;
	cout << "2 - Delete all the animals!" << endl;
	cout << "3 - Show the animals!" << endl;
	cout << "0 - Exit" << endl;
	cout << "-: ";

}

Animal* CreateAnimal()
{
	Animal* temp;
	uint input = 1;
	while (input)
	{
		system("cls");
		cout << "1 - Cat" << endl;
		cout << "2 - Dog" << endl;
		cout << "3 - Dolphin" << endl;
		cout << "4 - Elephant " << endl;
		cout << "5 - Parrot" << endl;
		cout << "6 - Pinguin" << endl;
		cout << "-: ";
		cin >> input;
		system("cls");

		switch (input)
		{
		case 1:
			temp = new Cat;
			temp->Init();
			system("cls");
			cout << "Success!" << endl;
			system("pause");
			return temp;
			break;
		case 2:
			temp = new Dog;
			temp->Init();
			system("cls");
			cout << "Success!" << endl;
			system("pause");
			return temp;
			break;
		case 3:
			temp = new Dolphin;
			temp->Init();
			system("cls");
			cout << "Success!" << endl;
			system("pause");
			return temp;
			break;
		case 4:
			temp = new Elephant;
			temp->Init();
			system("cls");
			cout << "Success!" << endl;
			system("pause");
			return temp;
			break;
		case 5:
			temp = new Parrot;
			temp->Init();
			system("cls");
			cout << "Success!" << endl;
			system("pause");
			return temp;
			break;
		case 6:
			temp = new Pinguin;
			temp->Init();
			system("cls");
			cout << "Success!" << endl;
			system("pause");
			return temp;
			break;
		default:
			system("cls");
			cout << "Something went wrong..." << endl;
			system("pause");
			break;
		}
	}
	return nullptr;
}
