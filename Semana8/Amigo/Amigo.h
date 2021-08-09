//
// Created by word2 on 08/08/2021.
//

#ifndef SEMANA8_AMIGO_H
#define SEMANA8_AMIGO_H

#include "../Pessoa/Pessoa.h"

class Amigo : public Pessoa {

private :
    std :: string aniversario;

public:
    Amigo(std::string& _nome, int& idade, std::string& aniversario);
    Amigo();

    std::string getAniversario() const;
    void setAniversario(std::string& _aniversario);


    virtual void addInformacao() override;

};


#endif //SEMANA8_AMIGO_H
