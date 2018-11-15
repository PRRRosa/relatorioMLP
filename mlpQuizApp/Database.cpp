//
// Created by Paulo Ricardo Ramos da Rosa on 20/10/18.
//
#include "Database.h"

Database::Database()
{       
        {
            auto description = "Quais as três características essenciais de uma linguagem orientada a objetos?";
            std::vector<std::string> alternatives {
                "Herança, Portabilidade e Coesão",
                "Polimorfismo, Herança e Acoplamento",
                "Encapsulamento, Herança e Polimorfismo",
                "Vínculo estático, vínculo dinâmico e polimorfismo"
            };
            _questions.push_back(new Question(description, alternatives, 2));
        }

        {
            auto description = "Em \"R\", dado o segmento de código: \nlibrary(functional)\nmult <- function\n"
                                    "{\nreturn(a*b);\n}\ndobra <- Curry(mult, a=2)\ntripla <- Curry(mult, a=3)\n"
                                    "\nQual o resultado ao chamarmos \ndobra(10)\ntripla(10)\n";
            std::vector<std::string> alternatives {
                "[1]20\n[1]60",
                "[1]100\n[1]1000",
                "[1]10\n[1]10",
                "[1]20\n[1]30"
            };
            _questions.push_back(new Question(description, alternatives, 3));
        }
        
        // questions.push_back(new Question("Qual desses algoritmos de coleta de lixo diminui a fragmentação externa e "
        //                             "divide o monte em regiões?", "Contador de referências", "Pare e copie", "Marcar e varrer",
        //                             "Coleção conservadora", 1));
        // questions.push_back(new Question("Qual desses algoritmos de coleta de lixo libera a memória logo que ela deixa de ser "
        //                             "usada ou referenciada?", "Contador de referências", "Coleção conservadora", "Pare e copie", "Marcar e varrer", 0));
        // questions.push_back(new Question("Dada uma hierarquia de classes em que uma classe C herda de B, e B herda de A, "
        //                                  "dada uma instância de C que vai ser destruída, em qual ordem os destrutores são chamados?"
        //                                  , "C,B,A", "B,C,A", "A,B,C", "C,A,B", 2));
        // questions.push_back(new Question("Se dynamic_cast falhar, que valor é retornado?", "void", "null", "ponteiro void", "ponteiro null", 3));

        //questions.push_back(new Question(""));
        _questions.push_back(new Question());

}

Database::~Database()
{

}

Question Database::getQuestion(int index)
{
    return *_questions[index];
}

int Database::getQuestionsSize()
{
    return _questions.size();
}
