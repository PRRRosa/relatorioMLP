#include <iostream>
#import "Database.cpp"

Database *database;

int main() {
    database = new Database();
    database->getPergunta(0).perguntar();
    database->getPergunta(1).perguntar();
    return 0;
}