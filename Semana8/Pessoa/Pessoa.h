//
// Created by word2 on 08/08/2021.
//

#ifndef SEMANA8_PESSOA_H
#define SEMANA8_PESSOA_H
#include <iostream>
#include <string>

class Pessoa {

private:
    std::string nome;
    int idade;

public:

    Pessoa(std::string& _nome, int& _idade);
    Pessoa();

    std::string getNome() const;
    int getIdade() const;

    virtual void addInformacao();

    inline void setNome(std::string& _nome);
    inline void setIdade(int& _idade);



};


#endif //SEMANA8_PESSOA_H
