//
// Created by word2 on 10/06/2021.
//

#ifndef SEMANA2_TIME_TEMPO_H
#define SEMANA2_TIME_TEMPO_H

#include <iostream>
#include "string.h"

class Tempo {

    int days , hours , minutes , seconds;  //variáveis do objeto tempo
    void verify_consistency();  //função para verificar se as variáveis ultrapassam os limites de horas (24), minutos (60) e segundos (60)
    void modify_seconds(int _seconds);  // 
    void modify_minutes(int _minutes);  // Funções que reajustam as variáveis, se houver inconsistência 
    void modify_hours(int _hours);      //
    void modify_days(int _days);        //
    long int get_total_time();

public :

    //Construtor com argumentos default
    Tempo(int _days = 0 , int _hours = 0 , int _minutes = 0 , int _seconds = 0);

    void add(Tempo* _tempo);   //Função para somar dois objetos tempo
    static Tempo * read_data();  //Função para ler variáveis do teclado
    void write_data();       //Função para printar variáveis na tela

    void increment();  //Incrementar 1 ou mais segundos no objeto
    void decrement();  //Decrementar 1 ou mais segundos do objeto

    int get_seconds() const;
    int get_minutes() const;
    int get_hours() const;
    int get_days() const;



};


#endif //SEMANA2_TIME_TEMPO_H
