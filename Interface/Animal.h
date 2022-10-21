#pragma once
#include<iostream>
#include"MyInterface.h"
using namespace std;

class Animal: public IAnimal // реализация интерфеса
{
protected:
	string name;
	double kg;
	string continent;
public:
	Animal() {
		name = "N/A";
		kg = 0;
		continent = "N/A";
	}
	Animal(string n, double k, string cont)
	{
		name = n;
		kg = k;
		continent = cont;
	}
	virtual void Print()
	{
		cout << "Name: " << name << endl;
		cout << "KG: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}
	virtual void Init() {
		string str_temp, str_cont;
		int kg;
		cout << "Enter name: ";
		cin >> str_temp;
		name = str_temp;
		cout << "Enter kg: ";
		cin >> kg;
		this->kg = kg;
		cout << "Enter continent:";
		cin >> str_cont;
		continent = str_cont;
	}
	virtual string GetName()const {
		return name;
	}
	virtual string GetContinent()const {
		return continent;
	}
};

class Elephant: public Animal // наследование 
{
public:
	Elephant() = default;
	Elephant(string n, double k, string cont):Animal(n,k,cont){}


	virtual void Eat()
	{
		cout << "Elephant Eat\n";
	}
	virtual void Move()
	{
		cout << "Elephant Move\n";
	}
	virtual void Init() {
		Animal::Init();
	}
	virtual void Print() {
		cout << "Type - Elephant" << endl;
		Animal::Print();
	}

};
class Parrot : public Animal,public IFly // наследование 
{
public:
	Parrot() = default;
	Parrot(string n, double k, string cont) :Animal(n, k, cont) {}

	// ----- реализация ИНТЕРФЕЙСА IANIMAL !!!

	virtual void Eat()
	{
		cout << "Parrot Eat\n";
	}
	virtual void Move()
	{
		cout << "Parrot Move\n";
	}
	// ----- реализация ИНТЕРФЕЙСА IFLY !!!
	virtual void Fly()
	{
		cout << "Parrot Fly\n";
	}
	virtual void Init() {
		Animal::Init();
	}
	virtual void Print() {
		cout << "Type - Parrot" << endl;
		Animal::Print();
	}

};





class Cat: public Animal,public IAnimal{

public:
	Cat() = default;
	Cat(string n, double k, string cont) :Animal(n, k, cont) {}

	virtual void Eat()
	{
		cout << "Cat Eat\n";
	}
	virtual void Move()
	{
		cout << "Cat Move\n";
	}
	virtual void Init() {
		Animal::Init();
	}
	virtual void Print() {
		cout << "Type - Cat" << endl;
		Animal::Print();
	}
};

class Dog : public Animal, public IAnimal {

public:
	Dog() = default;
	Dog(string n, double k, string cont) :Animal(n, k, cont) {}

	virtual void Eat()
	{
		cout << "Dog Eat\n";
	}
	virtual void Move()
	{
		cout << "Dog Move\n";
	}
	virtual void Init() {
		Animal::Init();
	}
	virtual void Print() {
		cout << "Type - Dog" << endl;
		Animal::Print();
	}
};



class Pinguin : public Animal, public ISwim {

public:
	Pinguin() = default;
	Pinguin(string n, double k, string cont) :Animal(n, k, cont) {}

	virtual void Eat()
	{
		cout << "Pinguin Eat\n";
	}
	virtual void Move()
	{
		cout << "Pinguin Move\n";
	}
	virtual void Swim()
	{
		cout << "Pinguin Swim\n";
	}
	virtual void Init() {
		Animal::Init();
	}
	virtual void Print() {
		cout << "Type - Pinguin" << endl;
		Animal::Print();
	}
};

class Dolphin : public Animal, public ISwim {

public:
	Dolphin() = default;
	Dolphin(string n, double k, string cont) :Animal(n, k, cont) {}

	virtual void Eat()
	{
		cout << "Dolphin Eat\n";
	}
	virtual void Move()
	{
		cout << "Dolphin Move\n";
	}
	virtual void Swim()
	{
		cout << "Dolphin Swim\n";
	}
	virtual void Init() {
		Animal::Init();
	}
	virtual void Print() {
		cout << "Type - Dolphin" << endl;
		Animal::Print();
	}
};