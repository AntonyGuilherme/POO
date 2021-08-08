//
// Created by word2 on 01/08/2021.
//

#include "Pager.h"

Pager::Pager(const Pager &pager) {
    this->str= pager.str;
}

Pager& Pager::operator=(const Pager &pager) {

    this->str = pager.str;

 return *this;
}

std::string Pager::getStr() const {
    return this->str;
}

void Pager::setStr(const std::string& str) {
   this->str = str;
}
