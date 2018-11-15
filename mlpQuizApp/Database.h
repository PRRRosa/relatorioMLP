//
// Created by Paulo Ricardo Ramos da Rosa on 15/11/18.
//

#ifndef MLPQUIZAPP_DATABASE_H
#define MLPQUIZAPP_DATABASE_H


#include <string>
#include <vector>
#include "Question.h"
#include "Object.h"

class Database : public Object
{
private:
    std::vector<Question*> _questions;
public:
    void print() {
    	std::cout << "Hello.";
    }
    Database();
    ~Database();
    Question getQuestion(int index);
    int getQuestionsSize();
};

#endif //MLPQUIZAPP_DATABASE_H