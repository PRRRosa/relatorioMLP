//
// Created by Paulo Ricardo Ramos da Rosa on 15/11/18.
//

#include "Person.h"

std::string Person::getName()
{
    return name;
}

Person::Person(std::string name)
{
    this->name = name;

}

void Person::print()
{
    std::cout<< "Meu nome é "<< this->name << std::endl;
}