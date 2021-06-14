//PROGRAMA TESTE

#include <iostream>
#include "Tempo/Tempo.h"

int main() {

    std :: cout << "PROGRAMA TESTE" << std :: endl;
    
    Tempo * tempo1 = new Tempo ();                  //Criar objeto "tempo1" e ler seus parâmetros no teclado
    tempo1->write_data();                           //Printar objeto "tempo1" na tela

    for(int i = 0 ; i < 90065 ; i++)                //Incrementar 1 em 1 segundo ao objeto "tempo1"
        tempo1->increment();

    tempo1->write_data();                           //Printar objeto "tempo1" incrementado na tela

    for(int i = 0 ; i < 90065 ; i++)                //Decrementar 1 em 1 segundo ao objeto "tempo1"
        tempo1->decrement();

    tempo1->write_data();                           //Printar objeto "tempo1" decrementado na tela

    Tempo * tempo2 = new Tempo(40,40,1000,5000);    //Criar objeto "tempo2" com parâmetros estabelecidos pelo programa
    tempo2->write_data();                           //Printar objeto "tempo2" na tela

    tempo1->add(tempo2);                            //Somar ao "tempo1" o "tempo2"

    tempo1->write_data();                           //Printar objeto "tempo1", agora com valor da soma de "tempo1" e "tempo2", na tela



    return 0;
}
