//
// Created by Paulo Ricardo Ramos da Rosa on 15/11/18.
//


#include <vector>
#import "Question.cpp"

class Database
{
private:
    std::vector <Question*> questions;
public:
    Database();
    ~Database();
    Question getQuestion(int index);
    int getQuestionsSize();
};