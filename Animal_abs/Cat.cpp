#include "Cat.h"
#include <cstring>
#include <iostream>
#include <Windows.h>
using namespace std;

void Cat::setSound(const char* sound)
{
    delete[]this->sound;
    this->sound = new char[strlen(sound) + 1];
    strcpy_s(this->sound, strlen(sound) + 1, sound);
}

const char* Cat::getSound() const
{
    return sound;
}

void Cat::makeSound() const
{
    cout << "Cat sound: " << sound << endl;
}

void Cat::Print() const
{
    cout << "----Cat----" << endl;
    cout << "Name: " << name << endl;
    cout << "Weight: " << weight << endl;
    cout << "Sound cat: " << sound << endl;
}

Cat::~Cat()
{
    delete[]sound;
}