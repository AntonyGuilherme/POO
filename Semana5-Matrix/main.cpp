
#include <iostream>
#include "Matrix/Matrix.h"

int main() {
    //ifstream in("myMatrix.txt");
    Matrix Y;
    Matrix X(3,1,5), A(3,3), C(3,3);
    Matrix Z(3,2,7.0);
    //Matrix W(in);

    // operadores a serem implementados em sua classe:

    // altera o valor de uma posição de A
    A(2,1)=10;
    A.print();

    // Soma
    C = A + A;
    C.print();

    // Subtração
    C -= A;
    C.print();

    // Subtração
    A = C - A;
    A.print();

    // Soma
    A += A;
    A.print();

    // A é igual a transposta de C
     A = ~C;
     A.print();

    // multiplicação por uma constante
    X *= 2;
    X.print();

    Matrix T(3,3,1);

    // multiplicação de matrizes
    C = A*X;
    C.print();

    // multiplicação de matrizes
    T *= X;
    T.print();

   // if (A == C)                                 // verifica a igualdade entre A e C
       // if(X != Y)                                  // verifica a desigualdade entre A e C
            //cout << Z << endl;                        // impressão de matrizes
    //std::cin >> W                                        // leitura de dados para dentro da matriz Y

    return 0;
}
