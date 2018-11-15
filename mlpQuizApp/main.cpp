#include <iostream>
#include <ctime>
#include "Database.h"
#include "Templates.cpp"
#include "SignUpManager.h"

Database *database;
char cont = 's';


void didSignUp(std::string name) {
    std::cout << "\ndidSignUp"<< name;
}

int main() {

    auto signUpManager = new SignUpManager(&didSignUp);
    signUpManager->start();

    srand(time(NULL));
    database = new Database();
    database->print();
    std::cout << max(1,2);
    while(cont == 's')
    {
        auto q = database->getQuestion(rand()%database->getQuestionsSize());
        std::cout << q;
        
        int answer;
        std::cin>>answer;
        std::cout << (q.checkAnswer(answer) ? "Correto!" : "Errou!") << std::endl;
        // respond(alt);

        std::cout<<"Quer continuar s/n?"<<std::endl;
        std::cin>>cont;
    }

    return 0;
}