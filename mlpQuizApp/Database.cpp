//
// Created by Paulo Ricardo Ramos da Rosa on 20/10/18.
//
#include <string>
#import "Pergunta.cpp"
#define NUMERODEPERGUNTAS 2
class Database
{
private:
    Pergunta *perguntas[NUMERODEPERGUNTAS];
public:
    Database()
    {
        perguntas[0] = new Pergunta("U MAD BRO?", "ME?", "NAH", "WAT?", "GTFO", 1);

        perguntas[1] = new Pergunta("YO RLY?", "NOPE", "NAH", "WAT?", "YA RLY", 3);

    }
    Pergunta getPergunta(int index)
    {
        return *perguntas[index];
    }

};