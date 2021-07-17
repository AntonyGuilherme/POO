//
// Created by word2 on 16/07/2021.
//

#ifndef SEMANA6_LIST_ERROR_H
#define SEMANA6_LIST_ERROR_H

#include "string"

class Error : public std::exception {

public :
    Error(const std::string &_message,const int& _codeError) : message((_message)) , codeError(_codeError){}

    inline std::string getMessage() const { return this->message; };
    inline int getCode() const { return this->codeError; };

    friend std ::ostream& operator<<(std::ostream& output,const Error& error){
        output << error.getMessage() << " " << error.getCode() ;
        return output;
    };

private :
    const std :: string message;
    const int codeError;


};


#endif //SEMANA6_LIST_ERROR_H
