#include <vector>
#include <numeric>
#include <iostream>
#import "Database.h"
#import "Question.h"

Database *database;
char cont = 's';

std::function < std::vector<bool> ( std::vector<Question*>, std::function< bool(Question*) > ) > questionsApply = [](std::vector<Question*> questions, std::function<bool(Question*)> appliedFunc) -> std::vector<bool> {
    if (questions.empty()) { 
        return std::vector<bool>();
    }

    Question* question = questions.front();
    questions.erase(questions.begin());

    auto correct = appliedFunc(question);

    // auto answers = askQuestions(questions);
    auto answers = questionsApply(questions, appliedFunc);
    if (answers.empty()) {
        return std::vector<bool> {correct};
    } else {
        answers.insert(answers.begin(), correct);
        return answers;
    }
};

// std::function < bool(Question*) > askQuestion = ;

int main() {
    database = new Database();
    auto questionsList = database->getQuestions();
    auto answers = questionsApply(questionsList, [](Question* question) -> bool {
        int answer;
        std::cout << question;
        std::cin >> answer;
        auto correct = question->checkAnswer(answer);
        if (correct) {
            std::cout << "\x1B[32m" << "Acertou!" << "\x1B[0m" << std::endl;
        } else {
            std::cout << "\x1B[31m" << "Errou!" << "\x1B[0m" << std::endl;
        }
        return correct;
    });
}

// int main2() {
//   std::vector<int> c{1, 2, 3, 4, 5, 6, 7};
//   int x = 5;

//   //lambda function
//   c.erase(std::remove_if(c.begin(), c.end(), [x](int n){ return n < x; }), c.end());
//   std::cout << c[0];

//   std::function<std::string(int)> getQuestion = [](int questionIndex) -> std::string {
//       std::vector<std::string> questions{
//               "Quais as três características essenciais de uma linguagem orientada a objetos?"};
//       return questions[questionIndex];
//   };
//   std::function<std::vector<std::string>(int)> getAlternatives = [](int questionIndex) -> std::vector<std::string> {
//       std::vector<std::string> alternative0{"Herança, Portabilidade e Coesão",
//                                             "Polimorfismo, Herança e Acoplamento",
//                                             "Encapsulamento, Herança e Polimorfismo",
//                                             "Vínculo estático, vínculo dinâmico e polimorfismo"};
//       std::vector<std::vector<std::string>> alternatives{alternative0};
//       return alternatives[questionIndex];
//   };

//   auto sub = [](auto x, auto y) {
//       return x - y;
//   };

//   //pattern matching, recursao em listas, copia o argumento original
//   std::function<void(std::vector<std::string>)> printAlternatives;
//   auto print = [](auto x) {
//       std::cout<<x;
//   };
//   auto printRecursive = [print](auto vector) -> void { // or '&unit
//       std::vector<auto> alternativesCopy = vector;
//       switch (alternativesCopy.size()) {
//         case 0: return;
//         default: {
//           std::cout << alternativesCopy[0] << "\n" << std::endl;
//           alternativesCopy.erase(alternativesCopy.begin());
//           printAlternatives(alternativesCopy);
//         }
//       };
//   };
//   printAlternatives = [printAlternatives](std::vector<std::string> alternatives) -> void {

//   };

//   std::string firstQuestion = getQuestion(0);
//   std::vector<std::string> firstAlternatives = getAlternatives(0);
//   printAlternatives(firstAlternatives);

// }