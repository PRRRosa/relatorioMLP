#include <iostream>
#include <ctime>
#import "Database.h"

Database *database;
char cont = 's';

int main() {
    srand(time(NULL));
    database = new Database();
    while(cont == 's')
    {
        database->getQuestion(rand()%database->getQuestionsSize()).askQuestion();
        std::cout<<"Quer continuar s/n?"<<std::endl;
        std::cin>>cont;
    }

    return 0;
}