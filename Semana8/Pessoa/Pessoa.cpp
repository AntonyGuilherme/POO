//
// Created by word2 on 08/08/2021.
//


#include "Pessoa.h"

Pessoa::Pessoa(std::string& _nome, int& _idade) : idade(_idade) , nome(_nome) {}

Pessoa::Pessoa() : nome("indefinido"), idade(0) {}

std::string Pessoa::getNome() const { return this->nome; }

int Pessoa::getIdade() const { return this->idade; }

inline void Pessoa::setNome(std::string& _nome) { this->nome = _nome; }

inline void Pessoa::setIdade(int& _idade) { this->idade = _idade;}

void Pessoa::addInformacao() {
    std::cout << "Nome : " << std::endl;
    std::cin >> this->nome;
    std::cout << "Idade : " << std::endl;
    std::cin >> this->idade;
}
