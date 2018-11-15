#include <iostream>
#include <ctime>
#import "Database.h"

Database *database;
char cont = 's';

int main() {
    srand(time(NULL));
    database = new Database();
    database->print();
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