#include <iostream>
#import "Database.cpp"

Database *database;

int main() {
    database = new Database();
    database->getQuestion(0).askQuestion();
    database->getQuestion(1).askQuestion();
    return 0;
}