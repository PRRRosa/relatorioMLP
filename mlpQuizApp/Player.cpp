//
// Created by Paulo Ricardo Ramos da Rosa on 21/10/18.
//
#include "Player.h"
#include <iostream>
#include <string>


Player::Player(std::string name)
{
    this->name = name;
}
Player::~Player()
{

}
int Player::getScore()
{
    return this->score;
}
void Player::setScore(int score)
{
    this->score = score;
}


