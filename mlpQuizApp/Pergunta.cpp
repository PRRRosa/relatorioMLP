//
// Created by Paulo Ricardo Ramos da Rosa on 20/10/18.
//
#include <iostream>
#include <string>

class Pergunta
{
private:
    std::string enunciado;
    std::string alternativas[4];
    int resposta;
public:
    Pergunta(std::string enunciado, std::string alternativa0,std::string alternativa1,std::string alternativa2,
             std::string alternativa3, int resposta)
    {
        this->enunciado = enunciado;
        this->alternativas[0] = alternativa0;
        this->alternativas[1] = alternativa1;
        this->alternativas[2] = alternativa2;
        this->alternativas[3] = alternativa3;
        this->resposta = resposta;
    }
    void showPergunta()
    {
        std::cout<< enunciado << std::endl;
        std::cout<< "1. " << alternativas[0] << std::endl;
        std::cout<< "2. " << alternativas[1] << std::endl;
        std::cout<< "3. " << alternativas[2] << std::endl;
        std::cout<< "4. " << alternativas[3] << std::endl<< std::endl;
    }
    void responder(int alternativa)
    {
        std::cout<<"Resposta: "<<resposta+1<<std::endl;
        if(resposta+1 == alternativa){
            std::cout<<"CORRETO"<<std::endl<<std::endl;
        }else{
            std::cout<<"ERRADO"<<std::endl<<std::endl;
        }
    }
    void perguntar()
    {
        int alt;
        showPergunta();
        std::cin>>alt;
        responder(alt);
    }

};