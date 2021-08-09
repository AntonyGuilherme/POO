//
// Created by word2 on 08/08/2021.
//

#include "Conhecido.h"

Conhecido::Conhecido(std::string &_nome, int &_idade, std::string& _email)
: email(_email) , Pessoa(_nome,_idade) {}

Conhecido::Conhecido() : email("indefinido-conhecido") {}

std::string Conhecido::getEmail() const {
    return this->email;
}

void Conhecido::setEmail(std::string &_email) {
    this->email = _email;
}

void Conhecido::addInformacao() {
    Pessoa::addInformacao();
    std::cout << "Email : " << std::endl;
    std::cin >> this->email;
}
