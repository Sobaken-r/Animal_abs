#include <iostream>
#include <Windows.h>
#include <cstring>
#include "Animal.h"
using namespace std;
#pragma once

class Cat : public Animal
{
	char* sound;
public:
	Cat(const char* name = "Atos", float weight = 10, const char* sound = "mav mav") : sound{new char[strlen(sound) + 1]}, Animal{name, weight} {
		strcpy_s(this->sound, strlen(sound) + 1, sound);
	};

	void setSound(const char* sound);

	const char* getSound() const;

	void makeSound()const override;
	void Print() const override;
	~Cat();
};

