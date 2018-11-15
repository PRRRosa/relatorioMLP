#include <iostream>
#import "Database.h"

Database *database;
char cont = 's';

// OO
//int main() {
//    srand(time(NULL));
//    database = new Database();
//    database->print();
//    std::cout << max(1,2);
//    while(cont == 's')
//    {
//        auto q = database->getQuestion(rand()%database->getQuestionsSize());
//        std::cout << q;
//
//        int answer;
//        std::cin>>answer;
//        std::cout << (q.checkAnswer(answer) ? "Correto!" : "Errou!") << std::endl;
//        // respond(alt);
//
//        std::cout<<"Quer continuar s/n?"<<std::endl;
//        std::cin>>cont;
//    }
//
//    return 0;
//}

// Functional

int main() {
  std::vector<int> c{1, 2, 3, 4, 5, 6, 7};
  int x = 5;

  //lambda function
  c.erase(std::remove_if(c.begin(), c.end(), [x](int n) { return n < x; }), c.end());
  std::cout << c[0];

  std::function<std::string(int)> getQuestion = [](int questionIndex) -> std::string {
      std::vector<std::string> questions{
              "Quais as três características essenciais de uma linguagem orientada a objetos?"};
      return questions[questionIndex];
  };
  std::function<std::vector<std::string>(int)> getAlternatives = [](int questionIndex) -> std::vector<std::string> {
      std::vector<std::string> alternative0{"Herança, Portabilidade e Coesão",
                                            "Polimorfismo, Herança e Acoplamento",
                                            "Encapsulamento, Herança e Polimorfismo",
                                            "Vínculo estático, vínculo dinâmico e polimorfismo"};
      std::vector<std::vector<std::string>> alternatives{alternative0};
      return alternatives[questionIndex];
  };

  auto sub = [](auto x, auto y) {
      return x - y;
  };

  //pattern matching, recursao em listas, copia o argumento original
  std::function<void(std::vector<std::string>)> printAlternatives;
  auto print = [](auto x) {
      std::cout<<x;
  };
  auto printRecursive = [print](auto vector) -> void { // or '&unit
      std::vector<auto> alternativesCopy = vector;
      switch (alternativesCopy.size()) {
        case 0: return;
        default: {
          std::cout << alternativesCopy[0] << "\n" << std::endl;
          alternativesCopy.erase(alternativesCopy.begin());
          printAlternatives(alternativesCopy);
        }
      };
  };
  printAlternatives = [printAlternatives](std::vector<std::string> alternatives) -> void {

  };

  std::string firstQuestion = getQuestion(0);
  std::vector<std::string> firstAlternatives = getAlternatives(0);
  printAlternatives(firstAlternatives);

}