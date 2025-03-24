#include <iostream>
#include <Windows.h>
#include <cstring>
#include "Animal.h"
#pragma once
using namespace std;

class Dog : public Animal
{
	char* sound;
public:
	Dog(const char* name = "Boba", float weight = 34, const char* sound = "gav gav") : sound{new char[strlen(sound) + 1]}, Animal{name, weight} {
		strcpy_s(this->sound, strlen(sound) + 1, sound);
	};

	void setSound(const char* sound);

	const char* getSound() const;

	void Print() const override;
	void makeSound() const override;
	~Dog();
};

