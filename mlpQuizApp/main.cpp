#include <iostream>
#include <ctime>
#include "Database.h"
#include "Templates.cpp"
#include "SignUpManager.h"
#include "Player.h"

Database *database;
Player *currentPlayer;
char cont='s';

void startQuestions() {
    srand(time(NULL));
    database = new Database();

    while(cont == 's')
    {


        auto q = database->getQuestion(rand()%database->getQuestionsSize());
        std::cout << q;

        int answer;
        
        while ( !(std::cin >> answer)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Valor inválido\n";
        }


        auto correct = q.checkAnswer(answer);
        std::cout << (correct ? "Correto!" : "Errou!") << std::endl;
        auto score = currentPlayer->getScore();
        auto newScore = correct ? score + 1 : score;
        currentPlayer->setScore(newScore);
        currentPlayer->print();

        std::cout << "Quer continuar s/n?" << std::endl;
        std::cin >> cont;

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