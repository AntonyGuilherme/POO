//
// Created by word2 on 16/07/2021.
//

#ifndef SEMANA6_LIST_ERRORNOTDELETED_H
#define SEMANA6_LIST_ERRORNOTDELETED_H

#include "../Error/Error.h"

class ErrorNotDeleted : public Error {

public :
    ErrorNotDeleted(const std::string& message) : Error(message,418){}

};


#endif //SEMANA6_LIST_ERRORNOTDELETED_H
