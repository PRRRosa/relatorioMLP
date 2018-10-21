#include <iostream>
#import "Database.cpp"

Database *database;

int main() {
    database = new Database();
    database->getPergunta(0).showPergunta();
    database->getPergunta(1).showPergunta();
    return 0;
}