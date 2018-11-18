#ifndef __QUESTION_H__
#define __QUESTION_H__

#include <iostream>
#include <string>
#include <vector>
#include "Object.h"

class Question:Object{
  private:
    std::string _description;
    std::vector<std::string> _alternatives;
    int _answer;

  public:
    Question();
    ~Question();
    Question(std::string description, std::vector<std::string> alternatives, int answer);
    void print();
    std::string getDescription() const;
    std::vector<std::string> getAlternatives() const;
    bool checkAnswer(int answer) const;
};

std::ostream &operator<< (std::ostream &output, const Question &question);
#endif