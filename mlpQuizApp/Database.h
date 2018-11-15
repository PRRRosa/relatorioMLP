//
// Created by Paulo Ricardo Ramos da Rosa on 15/11/18.
//


#include <vector>
#import "Question.cpp"
#include "Object.h"

class Database : public Object
{
private:
    std::vector <Question*> questions;
public:
    void print();
    Database();
    ~Database();
    Question getQuestion(int index);
    int getQuestionsSize();
};