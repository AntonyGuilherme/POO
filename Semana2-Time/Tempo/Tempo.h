//
// Created by word2 on 10/06/2021.
//

#ifndef SEMANA2_TIME_TEMPO_H
#define SEMANA2_TIME_TEMPO_H

class Tempo {


private :
    int days , hours , minutes , seconds;
    void verify_consistency();
    void modify_seconds();
    void add_seconds(int _seconds);
    void add_minutes(int _minutes);
    void add_hours(int _hours);
    void add_days(int _days);

public :

    Tempo(int _days , int _hours , int _minutes , int _seconds);
    Tempo(int _days , int _hours , int _minutes);
    Tempo(int _days , int _hours);
    Tempo(int _days);
    Tempo();

    void add(Tempo* _tempo);
    void read_data();
    void write_data();

    void increment();
    void decrement();

    int get_seconds() const;
    int get_minutes() const;
    int get_hours() const;
    int get_days() const;



};


#endif //SEMANA2_TIME_TEMPO_H
