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
		case 4:	{
			string temp;
			bool isFound = false;
			cout << "Enter data to search (name or continent):" << endl;
			cin >> temp;
			system("cls");
			for (auto ptr = animals.begin(); ptr != animals.end(); ptr++)
			{
				if ((*ptr)->GetName() == temp || (*ptr)->GetContinent() == temp) {
					(*ptr)->Print();
					cout << endl;
					isFound = true;
				}
			}
			if (!isFound) {
				cout << "No animals with such data..." << endl;
			}
			system("pause");
			break;
		}
		case 5: {
			int pos;
			bool isFound = false;
			cout << "Enter the position to insert the animal:" << endl;
			cin >> pos;
			int i = 0;
			for (auto ptr = animals.begin(); ptr != animals.end(); ptr++)
			{
				i++;
				if (i == pos) {
					animals.insert(ptr, CreateAnimal());
					isFound = true;
				}
			}
			if (!isFound) {
				system("cls");
				cout << "Something went wrong..." << endl;
				system("pause");
			}
			break;
		}
		case 6: {
			int pos;
			bool isFound = false;
			cout << "Enter the position of animal to edit:" << endl;
			cin >> pos;
			int i = 0;
			for (auto ptr = animals.begin(); ptr != animals.end(); ptr++)
			{
				i++;
				if (i == pos) {
					(*ptr)->Init();
				}
				isFound = true;
			}
			if (!isFound) {
				system("cls");
				cout << "Something went wrong..." << endl;
				system("pause");
			}
			break;
		}
		case 0:
			break;
		
		default:
			cout << "Something went wrong..." << endl;
			system("pause");
			break;
		}
	}
	return 0;
}

void PrintMenu()
{
	cout << "############### Animal Simulator! TM ###############" << endl;
	cout << "1 - Add an animal!" << endl;
	cout << "2 - Delete the animals!" << endl;
	cout << "3 - Show the animals!" << endl;
	cout << "4 - Search!" << endl;
	cout << "5 - Insert in the position!" << endl;
	cout << "6 - Edit an animal!" << endl;
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
