//
// Created by word2 on 08/08/2021.
//

#include <iostream>
#include "Amigo.h"

Amigo::Amigo(std::string &_nome, int &_idade,std::string &_aniversario) :
aniversario(_aniversario),Pessoa(_nome,_idade) {}

Amigo::Amigo() : aniversario("aniversario-indefenido") {}

std::string Amigo::getAniversario() const {
    return this->aniversario;
}

void Amigo::setAniversario(std::string &_aniversario) {
    this->aniversario = _aniversario;
}

void Amigo::addInformacao() {
    Pessoa::addInformacao();
    std::cout << "Aniversario : " << std::endl;
    std::cin >> this->aniversario;
}
