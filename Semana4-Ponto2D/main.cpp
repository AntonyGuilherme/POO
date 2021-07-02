#include <iostream>
#include "Ponto2D.h"

int main() {
    std :: cout << "PROGRAMA TESTE - SEMANA 3" << std :: endl;

    Ponto2D * ponto1 = new Ponto2D();
    Ponto2D * ponto2 = new Ponto2D(3,4);

    Ponto2D p1;
    Ponto2D p2(3.0, 4.0);
// inicializações usando o construtor de cópia
    Ponto2D p3(p1);      // Ponto2D p3 é inicializado com as coordenadas do ponto p1
    Ponto2D p4 = p2;     // Ponto2D p4 é inicializado com as coordenadas do ponto p2


    std :: cout << "Ponto p1: ";
    p1.print();
    std :: cout << "Ponto p2: ";
    p2.print();

    std :: cout << "Ponto p1 - copia: ";
    p3.print();
    std :: cout << "Ponto p2 - copia: ";
    p4.print();


    std :: cout << "Ponto 1: ";
    ponto1->print();
    std :: cout << "Ponto 2: ";
    ponto2->print();

    std :: cout << std :: endl << "A distancia do ponto 1 a origem e: ";
    std ::  cout << " " << ponto1->distToOrig() << std :: endl;

    std :: cout << "A distancia do ponto 2 a origem e: ";
    std ::  cout << " " << ponto2->distToOrig() << std :: endl;

    Ponto2D ponto3 = ponto2->sumToNewPoint(* ponto1);

    std :: cout << "Ponto 3: ";
    ponto3.print();

    ponto2->sumOf(ponto3);

    std :: cout << "Ponto 2 agora e: ";
    ponto2->print();

    std :: cout << std :: endl << "ID Ponto 1, Ponto 2 e Ponto 3: ";
    std ::  cout << " " << ponto1->get_id() << " " << ponto2 -> get_id() << " " << ponto3.get_id() << std :: endl;

    std :: cout << "A distancia do ponto 2 ate a origem e: ";
    std :: cout << ponto2->distToOrig(ponto3) ;

    delete ponto1;
    delete ponto2;

    return 0;
}
