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

std::ostream &operator<< (std::ostream &output, const Question &question) {
    output << std::endl << question.getDescription() << std::endl;
    for (int i=0; i < question.getAlternatives().size(); i++)
        output << i << ". " <<  question.getAlternatives()[i] << std::endl << std::endl;
    return output;
}