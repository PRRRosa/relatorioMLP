//
// Created by Paulo Ricardo Ramos da Rosa on 15/11/18.
//

#include <iostream>
#include <string>
class Player
{
private:
    std::string name;
    int score;
public:
    Player(std::string name);
    ~Player();
    int getScore();
    void setScore(int score);
};