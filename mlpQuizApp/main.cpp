#import "Database.h"

#include <iostream>
#include <ctime>
#include "Templates.cpp"

Database *database;
char cont = 's';

int main() {

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