//
// Created by word2 on 01/08/2021.
//

#ifndef SEMANA7_TRAVELER_TRAVELER_H
#define SEMANA7_TRAVELER_TRAVELER_H

#include <string>

class Traveler {

private :
    std:: string str;

public :
    Traveler(const std ::string &_str = "1") : str(_str){};
    Traveler(const Traveler& traveller){
        this->str = traveller.str;
    };

    Traveler& operator= (const Traveler &traveller){

        this->str = traveller.str;

        return (*this);
    };

    void setStr(const std :: string& str){
        this->str = str;
    }

    std:: string getStr() const{
        return this->str;
    }


};


#endif //SEMANA7_TRAVELER_TRAVELER_H
