#include <iostream>
#include "fstream"
#include "string"

int main() {

    char buffer[256];
    const std :: string nome_file = "file.txt";
    std :: ifstream fs("file.txt") ;
    std :: string c;
    if(!fs)
        std :: cout << "file not founded" ;

    while(std :: getline(fs,c))
        for(int i = 0; c.size() < i ; i++)
            std :: cout << "passou" << c[i] << " ";

    return 0;
}
