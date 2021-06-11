//
// Created by word2 on 10/06/2021.
//

#include "Tempo.h"

Tempo :: Tempo(int _days , int _hours , int _minutes , int _seconds) : days(_days) , hours(_hours) , minutes(_minutes) , seconds(_seconds) {}
Tempo :: Tempo(int _days , int _hours , int _minutes) : Tempo(_days,_hours,_minutes,0) {}
Tempo :: Tempo(int _days , int _hours) : Tempo(_days,_hours,0){};
Tempo :: Tempo(int _days) : Tempo(_days,0) {}
Tempo :: Tempo() : Tempo(0){}

void Tempo :: verify_consistency() {
    this->add_seconds(0);
}

void Tempo::modify_seconds() {

}

void Tempo::add(Tempo *_tempo) {

    this->add_seconds(_tempo->get_seconds());
    this->add_minutes(_tempo->get_minutes());
    this->add_hours(_tempo->get_hours());
    this->add_days(_tempo->get_days());

}



void Tempo::increment() {
    this->add_seconds(1);
}

void Tempo::decrement() {

};


void Tempo::read_data() {

}

void Tempo::write_data() {

}

int Tempo::get_seconds() const {
    return this->seconds;
}

int Tempo::get_minutes() const {
    return this->minutes;
}

int Tempo::get_hours() const {
    return this->minutes;
}

int Tempo::get_days() const {
    return this->days;
}

void Tempo :: add_seconds(int _seconds) {

    this->seconds += _seconds;

    if(this->get_seconds() >= 60){
        int _minutes = this->get_seconds() % 60 ;
        this->seconds -= _minutes * 60 ;
        this->add_minutes(_minutes);
    }

}

void Tempo :: add_minutes(int _minutes) {

    this->minutes += _minutes;

    if(this->get_minutes() >= 60){
        int _hours = this->get_minutes() % 60 ;
        this->minutes -= _hours * 60 ;
        this->add_hours(_hours);
    }

}

void Tempo :: add_hours(int _hours) {

    this->hours += _hours;

    if(this->get_hours() >= 24){
        int _days = this->get_hours() % 24 ;
        this->hours -= _days * 24 ;
        this->add_days(_days);
    }


}

void Tempo :: add_days(int _days) {
    this->days += _days;
}
