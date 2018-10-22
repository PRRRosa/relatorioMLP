//
// Created by Paulo Ricardo Ramos da Rosa on 20/10/18.
//
#include <string>
#import "Question.cpp"
#define NUMBEROFQUESTIONS 2
class Database
{
private:
    Question *questions[NUMBEROFQUESTIONS];
public:
    Database()
    {
        questions[0] = new Question("U MAD BRO?", "ME?", "NAH", "WAT?", "GTFO", 1);

        questions[1] = new Question("YO RLY?", "NOPE", "NAH", "WAT?", "YA RLY", 3);

    }
    Question getQuestion(int index)
    {
        return *questions[index];
    }

};