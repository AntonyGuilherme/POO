//
// Created by word2 on 10/06/2021.
//

#ifndef SEMANA2_TIME_TEMPO_H
#define SEMANA2_TIME_TEMPO_H

#include <iostream>
#include "string.h"

class Tempo {

    int days , hours , minutes , seconds;
    void verify_consistency();
    void modify_seconds(int _seconds);
    void modify_minutes(int _minutes);
    void modify_hours(int _hours);
    void modify_days(int _days);
    long int get_total_time();

public :

    Tempo(int _days = 0 , int _hours = 0 , int _minutes = 0 , int _seconds = 0);

    void add(Tempo* _tempo);
    static Tempo * read_data();
    void write_data();

    void increment();
    void decrement();

    int get_seconds() const;
    int get_minutes() const;
    int get_hours() const;
    int get_days() const;



};


#endif //SEMANA2_TIME_TEMPO_H
