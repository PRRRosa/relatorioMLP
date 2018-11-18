#include "Question.h"

Question::Question() {
    this->_description = "Description";
    this->_answer = 0;

    std::vector<std::string> alternatives {"Option 1", "Option 2"};
    this->_alternatives = alternatives;
};

Question::Question(std::string description, std::vector<std::string> alternatives, int answer) {
    //validator
    this->_description = description;
    this->_alternatives = alternatives;
    this->_answer = answer;
}
Question::~Question()
{
    std::cout << "Questão deletada" << std::endl;
}

std::ostream &operator<< (std::ostream &output, const Question &question) {
    output << std::endl << question.getDescription() << std::endl;
    for (int i=0; i < question.getAlternatives().size(); i++)
        output << i << ". " <<  question.getAlternatives()[i] << std::endl << std::endl;
    return output;
}
void Question::print()
{
    std::cout<<"Question"<<std::endl;
}

std::string Question::getDescription() const
{
    return _description;
}
std::vector<std::string> Question::getAlternatives() const
{
    return _alternatives;
}
bool Question::checkAnswer(int answer) const
{
    return _answer == answer;
}