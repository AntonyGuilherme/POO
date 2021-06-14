#include <iostream>
#include "Tempo/Tempo.h"

int main() {

    Tempo * tempo1 = new Tempo (40,10,40,0);
    tempo1->write_data();

    for(int i = 0 ; i < 90065 ; i++)
        tempo1->increment();

    tempo1->write_data();

    for(int i = 0 ; i < 90065 ; i++)
        tempo1->decrement();

    tempo1->write_data();

    Tempo * tempo2 = new Tempo(40,40,1000,5000);
    tempo2->write_data();

    tempo1->add(tempo2);

    tempo1->write_data();



    return 0;
}
