#include "SignUpManager.h"

SignUpManager::SignUpManager(SignUpManagerDelegate delegate) {
    this->_delegate = delegate;
};

void SignUpManager::start() {
    std::string name;
    std::cout << "Escolha um nome de usuário: ";
    std::cin >> name;
    std::cout << std::endl << "Usuário cadastrado." << std::endl;
    this->_delegate(name);
}