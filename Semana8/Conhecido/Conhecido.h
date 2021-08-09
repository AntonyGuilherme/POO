//
// Created by word2 on 08/08/2021.
//

#ifndef SEMANA8_CONHECIDO_H
#define SEMANA8_CONHECIDO_H
#include "../Pessoa/Pessoa.h"

class Conhecido : public Pessoa {

private:
    std::string email;

public:

    Conhecido();
    Conhecido(std::string& _nome, int& _idade, std::string& _email);

    std::string getEmail() const;
    void setEmail(std::string& _email);

    virtual void addInformacao() override;

};


#endif //SEMANA8_CONHECIDO_H
