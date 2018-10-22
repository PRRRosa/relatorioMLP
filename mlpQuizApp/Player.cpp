//
// Created by Paulo Ricardo Ramos da Rosa on 21/10/18.
//

#include <iostream>
#include <string>

class Player
{
private:
    std::string name;
    int score;
public:
    Player(std::string name){
        this->name = name;
    }
    int getScore()
    {
        return this->score;
    }
    void setScore(int score)
    {
        this->score = score;
    }
};

