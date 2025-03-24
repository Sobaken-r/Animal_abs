#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;
#pragma once

class Animal
{
protected:
	char* name;
	float weight;
public:

	Animal() :name{ nullptr }, weight{ 0 } {};
	Animal(const char* name, float weight) : name{ new char[strlen(name) + 1] }, weight{ weight } {
		strcpy_s(this->name, strlen(name) + 1, name);
	};

	void setName(const char* name);
	void setWeight(int weight);

	const char* getName() const;
	float getWeight()const;

	virtual void Print() const = 0;
	virtual void makeSound() const = 0;

	~Animal();
};

