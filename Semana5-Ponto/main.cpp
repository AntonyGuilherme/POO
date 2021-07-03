#include <iostream>
#include "Ponto2D/Ponto2D.h"

int main() {
    std :: cout << "PROGRAMA TESTE - SEMANA 3" << std :: endl;

    Ponto2D a(1,4), b(3,2), c;

    // soma as coordenadas dos pontos a e b
    c = a + b;
    c.print();

    // decrementa em uma unidade as coordenadas de c
    --c;

    c.print();

    return 0;
}
