//
// Created by Paulo Ricardo Ramos da Rosa on 21/10/18.
//

#include <iostream>
#include <string>

class Jogador
{
private:
    std::string nome;
    int pontuacao;
public:
    Jogador(std::string nome){
        this->nome = nome;
    }
    int getPontuacao()
    {
        return this->pontuacao;
    }
    void setPontuacao(int porntuacao)
    {
        this->pontuacao = porntuacao;
    }
};