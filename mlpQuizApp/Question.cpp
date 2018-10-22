//
// Created by Paulo Ricardo Ramos da Rosa on 20/10/18.
//
#include <iostream>
#include <string>

class Question
{
private:
    std::string enunciation;
    std::string alternatives[4];
    int answer;
public:
    Question(std::string enunciation, std::string alternative0,std::string alternative1,std::string alternative2,
             std::string alternative3, int answer)
    {
        this->enunciation = enunciation;
        this->alternatives[0] = alternative0;
        this->alternatives[1] = alternative1;
        this->alternatives[2] = alternative2;
        this->alternatives[3] = alternative3;
        this->answer = answer;
    }
    void showQuestion()
    {
        std::cout<< enunciation << std::endl;
        std::cout<< "1. " << alternatives[0] << std::endl;
        std::cout<< "2. " << alternatives[1] << std::endl;
        std::cout<< "3. " << alternatives[2] << std::endl;
        std::cout<< "4. " << alternatives[3] << std::endl<< std::endl;
    }
    void respond(int alternative)
    {
        std::cout<<"Resposta: "<<answer+1<<std::endl;
        if(answer+1 == alternative){
            std::cout<<"CORRETO"<<std::endl<<std::endl;
        }else{
            std::cout<<"ERRADO"<<std::endl<<std::endl;
        }
    }
    void askQuestion()
    {
        int alt;
        showQuestion();
        std::cin>>alt;
        respond(alt);
    }

};

