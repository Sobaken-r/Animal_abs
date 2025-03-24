#include "Dog.h"
#include <cstring>
#include <iostream>
#include <Windows.h>
using namespace std;

void Dog::setSound(const char* sound)
{
    delete[]this->sound;
    this->sound = new char[strlen(sound) + 1];
    strcpy_s(this->sound, strlen(sound) + 1, sound);
}

const char* Dog::getSound() const
{
    return sound;
}

void Dog::Print() const
{
    cout << "----Dog----" << endl;
    cout << "Name: " << name << endl;
    cout << "Weight: " << weight << endl;
    cout << "Sound: " << sound << endl;
}

void Dog::makeSound() const
{
    cout << "Dog sound: " << sound << endl;
}

Dog::~Dog()
{
    delete[]sound;
}
