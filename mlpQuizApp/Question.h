#ifndef __QUESTION_H__
#define __QUESTION_H__

#include <iostream>
#include <string>
#include <vector>

class Question {
  private:
    std::string _description;
    std::vector<std::string> _alternatives;
    int _answer;

  public:
    Question();
    Question(std::string description, std::vector<std::string> alternatives, int answer);
    
    std::string getDescription() const { return _description; }
    std::vector<std::string> getAlternatives() const { return _alternatives; }
    bool checkAnswer(int answer) const { return _answer == answer; }
};

std::ostream &operator<< (std::ostream &output, const Question &question);
std::ostream &operator<< (std::ostream &output, Question *question);
#endif