#include <iostream>
#include <windows.h>
#include <cstring>
#include "Cat.h"
#include "Dog.h"
using namespace std;


int main()
{
    setlocale(0, "");
    
    Animal* cat = new Cat();
    Animal* dog = new Dog();

    cat->Print();
    cat->makeSound();
    dog->Print();
    dog->makeSound();
}
