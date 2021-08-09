//
// Created by word2 on 08/08/2021.
//

#include "Agenda.h"
#include "math.h"

int Agenda::createRandomNumber() {

    // 0 ou 1
    int randomNumber = (rand()%2);

    // 1 ou 2
    return ( randomNumber > 0 ? 2 : 1);
}

Agenda::Agenda(int numeroRegistros) {

    this->vector = new std::vector<Pessoa*>;

    for(int i =0 ; i < numeroRegistros; i++){

        int randomNumber = this->createRandomNumber();

        if(randomNumber == 1){
            // instanciando um amigo
            this->vector->push_back(new Amigo());
            this->incrementQuantidadeAmigos();
        }
        else {
            this->vector->push_back(new Conhecido());
            this->incrementQuantidadeConhecidos();
        }
    }

}



int Agenda::getQuantidadeAmigos() const {
    return this->quantidadeAmigos;
}

int Agenda::getQuantidadeConhecidos() const {
    return this->quantidadeConhecidos;
}

void Agenda::incrementQuantidadeAmigos() {
    this->quantidadeAmigos++;
}

void Agenda::incrementQuantidadeConhecidos() {
    this->quantidadeConhecidos++;
}

void Agenda::addInformacoes() {
    for(auto pessoa : *this->vector){
        pessoa->addInformacao();
    }
}

void Agenda::imprimeEmail() const{

    for(auto pessoa : *this->vector){

        Conhecido* conhecido = dynamic_cast<Conhecido*>(pessoa);

        if(conhecido) // se não converter conhecido = 0
          std::cout << conhecido->getEmail() << std::endl;
    }

}

void Agenda::imprimeAniversarios() const {

    for(auto pessoa : *this->vector){

        Amigo* amigo = dynamic_cast<Amigo*>(pessoa);

        if(amigo) // se não converter conhecido = 0
            std::cout << amigo->getAniversario() << std::endl;
    }

}


