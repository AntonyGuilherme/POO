//
// Created by word2 on 08/08/2021.
//

#ifndef SEMANA8_AGENDA_H
#define SEMANA8_AGENDA_H

#include "../Conhecido/Conhecido.h"
#include "../Amigo/Amigo.h"
#include "../Pessoa/Pessoa.h"
#include <vector>

class Agenda {

private:
    std::vector<Pessoa*> * vector;
    int quantidadeAmigos = 0, quantidadeConhecidos = 0;

    /**
     * @returns um número randômico entre um e dois
     * */
    int createRandomNumber();

    void incrementQuantidadeAmigos();
    void incrementQuantidadeConhecidos();


public:
    /**
     *
     * @param number quantidade de pessoas que agenda terá
     */
    Agenda(int numeroRegistros);

    void addInformacoes();

    int getQuantidadeAmigos() const;
    int getQuantidadeConhecidos() const;

    void imprimeEmail() const;
    void imprimeAniversarios() const;


};


#endif //SEMANA8_AGENDA_H
