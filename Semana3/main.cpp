#include <iostream>
#include "Ponto2D/Ponto2D.h"

int main() {

    /*
     * Instanciando um objeto
     * */

    Ponto2D * ponto1 = new Ponto2D();
    Ponto2D * ponto = new Ponto2D(3,4);

    ponto1->print();
    ponto->print();

    std ::  cout << " " << ponto1->distToOrig() << std :: endl;
    std ::  cout << " " << ponto->distToOrig() << std :: endl;

    Ponto2D ponto2 = ponto->sumToNewPoint(* ponto1);
    ponto2.print();

    ponto->sumOf(ponto2);
    ponto->print();



    std ::  cout << " " << ponto->get_id() << " " << ponto1 -> get_id() << " " << ponto2.get_id() << std :: endl;

    std :: cout << ponto->distToOrig(ponto2) ;

    delete ponto;
    delete ponto1;

    return 0;
}
