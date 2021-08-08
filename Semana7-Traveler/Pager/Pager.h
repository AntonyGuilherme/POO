//
// Created by word2 on 01/08/2021.
//

#ifndef SEMANA7_TRAVELER_PAGER_H
#define SEMANA7_TRAVELER_PAGER_H
#include <string>

class Pager {

private :
    std:: string str;

public :
    Pager(const std ::string &_str = "1") : str(_str){};
    Pager(const Pager& pager);

    Pager& operator= (const Pager &pager);
    std::string getStr() const;
    void setStr(const std::string& str);

};


#endif //SEMANA7_TRAVELER_PAGER_H
