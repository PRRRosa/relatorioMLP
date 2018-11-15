//
// Created by Paulo Ricardo Ramos da Rosa on 15/11/18.
//

#ifndef MLPQUIZAPP_PLAYER_H
#define MLPQUIZAPP_PLAYER_H

#include "Person.h"
#include <iostream>
#include <string>
class Player:public Person
{
private:
    int score;
public:
    Player(std::string name);
    ~Player();
    int getScore();
    void setScore(int score);
    void printName();
};

#endif //MLPQUIZAPP_PLAYER_H