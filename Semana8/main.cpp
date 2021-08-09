#include <iostream>
#include "Amigo/Amigo.h"
#include "Conhecido/Conhecido.h"
#include "Agenda/Agenda.h"
#include <math.h>

int main() {

    Agenda agenda(40);
    agenda.imprimeAniversarios();
    agenda.imprimeEmail();

    return 0;
}
