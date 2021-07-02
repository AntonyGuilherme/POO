#include <iostream>

#include "Matrix/Matrix.h"

void printText(std :: string text){
    std :: cout <<std::endl << text ;
}

int main()
{

    const std :: string nome_file = "file.txt";
    std::ifstream in("myMatrix.txt");

    printText("Construtor vazio!");
    Matrix R;
    printText("Matriz");
    R.print();

    printText("Construtor sem valores!");
    Matrix X(3,3);
    printText("Matriz");
    X.print();

    printText("Construtor com valor(5.0)!");
    Matrix Z(3,2,5.0);
    printText("Matriz");
    Z.print();

    printText("Construtor de copia") ;
    Matrix W=Z;
    Matrix Y(Z);
    printText("Matriz 1");
    W.print();
    printText("Matriz 2");
    Y.print();

    printText("Construtor com arquivos!");
    Matrix F(in);
    printText("Matriz");
    F.print();

    printText("Gerando a matriz identidade!");
    X.unit();
    printText("Matriz");
    X.print();

    printText("Zerando a matriz X!");
    X.zeros();
    printText("Matriz");
    X.print();

    printText("Preenchendo a matriz X com 1's!");
    X.ones();
    printText("Matriz");
    X.print();



    return 0;
}

