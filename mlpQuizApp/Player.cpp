//
// Created by Paulo Ricardo Ramos da Rosa on 21/10/18.
//
#include "Player.h"
#include <iostream>
#include <string>


Player::Player(std::string name):Person(name) {
    this->_score = 0;
}

Player::~Player()
{
    std::cout << "Jogador deletado" << std::endl;
}

void Player::setScore(int score) {
	if (score < 0) { return; }
    this->_score = score;
}

void Player::print() {
    std::cout<< "Meu nome é "<< this->getName() << " e minha pontuação é " << this->getScore() << std::endl;
}
int Player::getScore() const
{
    return _score;
}


