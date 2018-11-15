#include "SignUpManager.h"

SignUpManager::SignUpManager(SignUpManagerDelegate delegate) {
    this->_delegate = delegate;
};

void SignUpManager::start() {
    std::string name;
    std::cout << "Escolha um nome de usuário: ";
    std::cin >> name;

    auto player = Player(name);
    this->_delegate(player);
}