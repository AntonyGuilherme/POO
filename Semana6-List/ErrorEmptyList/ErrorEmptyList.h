//
// Created by word2 on 16/07/2021.
//

#ifndef SEMANA6_LIST_ERROREMPTYLIST_H
#define SEMANA6_LIST_ERROREMPTYLIST_H

#include "../Error/Error.h"

class ErrorEmptyList : public Error {

public:
    ErrorEmptyList(const std::string & message) : Error(message,404){};



};


#endif //SEMANA6_LIST_ERROREMPTYLIST_H
