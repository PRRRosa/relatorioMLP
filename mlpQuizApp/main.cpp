#include <iostream>
#include <ctime>
#include "Database.h"
#include "Templates.cpp"
#include "SignUpManager.h"
#include "Player.h"

Database *database;
Player *currentPlayer;

void startQuestions() {
    srand(time(NULL));
    database = new Database();
    // database->print();

    while(true) {
        auto q = database->getQuestion(rand()%database->getQuestionsSize());
        std::cout << q;
        
        int answer;
        std::cin >> answer;

        auto correct = q.checkAnswer(answer);
        std::cout << (correct ? "Correto!" : "Errou!") << std::endl;
        auto score = currentPlayer->getScore();
        auto newScore = correct ? score + 1 : score;
        currentPlayer->setScore(newScore);
        currentPlayer->print();
    }
}

void didSignUp(Player player) {
    currentPlayer = &player;
    currentPlayer->print();
    startQuestions();
}

int main() {
    auto signUpManager = new SignUpManager(&didSignUp);
    signUpManager->start();
    return 0;
}