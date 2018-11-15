//
// Created by Paulo Ricardo Ramos da Rosa on 15/11/18.
//

#ifndef MLPQUIZAPP_PERSON_H
#define MLPQUIZAPP_PERSON_H

#include <string>
#include <iostream>

class Person
{
private:
    std::string name;

public:
    Person(std::string name);
    std::string getName();
    virtual  void printName()=0;
};


#endif //MLPQUIZAPP_PERSON_H
