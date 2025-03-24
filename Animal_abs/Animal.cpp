#include "Animal.h"
#include <cstring>
#include <iostream>
#include <Windows.h>
using namespace std;

void Animal::setName(const char* name)
{
    delete[]this->name;
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

void Animal::setWeight(int weight)
{
    this->weight = weight;
}

const char* Animal::getName() const
{
    return name;
}

float Animal::getWeight() const
{
    return weight;
}

Animal::~Animal()
{
    delete[]name;
}
