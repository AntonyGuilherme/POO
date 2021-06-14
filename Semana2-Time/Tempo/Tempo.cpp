//
// Created by word2 on 10/06/2021.
//

#include "Tempo.h"

Tempo :: Tempo(int _days , int _hours  , int _minutes , int _seconds) : days(_days) ,
hours(_hours) , minutes(_minutes) , seconds(_seconds) {
    this->verify_consistency();
}


void Tempo :: verify_consistency() {
    this->modify_seconds(0);
    this->modify_minutes(0);
    this->modify_hours(0);
    this->modify_days(0);

}

void Tempo::add(Tempo *_tempo) {

    this->modify_seconds(_tempo->get_seconds());
    this->modify_minutes(_tempo->get_minutes());
    this->modify_hours(_tempo->get_hours());
    this->modify_days(_tempo->get_days());

}

void Tempo::increment() {
    this->modify_seconds(1);
}

void Tempo::decrement() {
    this->modify_seconds(-1);
}

Tempo * Tempo::read_data() {

    char code ;
    std :: cout << "Digite o formato de data desejado :" << std :: endl ;
    std :: cout << "D - para informar dias." << std :: endl;
    std :: cout << "H - para informar dias e horas." << std :: endl;
    std :: cout << "M - para informar dias, horas e minutos." << std :: endl;
    std :: cout << "S - para informar dias, horas, minutos e segundos." << std :: endl;
    std :: cout << "X - para prosseguir sem dados." << std :: endl;

    std :: cin >> code ;

    if(code != 'X' && code != 'D' && code != 'H' && code != 'M' && code != 'S')
        throw " Codigo invalido! ";

    if(code == 'X')  return new Tempo();

    int days , hours , minutes , seconds;

    std :: cout << " Número de dias : ";
    std :: cin >> days ;

    if(code == 'D')  return new Tempo(days);

    std:: cout << " Número de horas : ";
    std :: cin >> hours;

    if(code == 'H')  return new Tempo(days,hours);

    std:: cout << " Número de minutos : ";
    std :: cin >> minutes;

    if(code == 'M')  return new Tempo(days,hours,minutes);

    std:: cout << " Número de segundos : ";
    std :: cin >> seconds;

    if(code == 'S')  return new Tempo(days,hours,minutes,seconds);

}

void Tempo::write_data() {
    std :: cout << this->get_days() << " dias - " <<  this->get_hours() << " horas - ";
    std :: cout << this->get_minutes() << " minutos - " << this->get_seconds() << " segundos ";
    std :: cout << std::endl;
}

int Tempo::get_seconds() const {
    return this->seconds;
}

int Tempo::get_minutes() const {
    return this->minutes;
}

int Tempo::get_hours() const {
    return this->hours;
}

int Tempo::get_days() const {
    return this->days;
}

void Tempo::modify_seconds(int _seconds) {

    if(_seconds > this->get_total_time()) throw "Não há tempo suficiente para ser subtraído.";

    if(_seconds >= 0){

        this->seconds += _seconds;

        if(this->get_seconds() >= 60){
            int _minutes = (int) (this->get_seconds() / 60) ;
            this->seconds -= _minutes * 60 ;
            this->modify_minutes(_minutes);
        }

        return;

    }

    // se houver tempo para subtrair

    //modulo do tempo em segundos recebido
    int module_seconds = ((-1) * _seconds);

    // (0 - 59) para subtrair
    if(this->get_seconds() >= module_seconds) {
        this->seconds -= module_seconds;
        return;
    }

    // se não houver tempo , nos segundos, para subtrair
    // -100 ou (30 - 0) = 30 segundos

    //sempre positivo
    int seconds_not_founded = module_seconds - this->get_seconds();

    int _minutes_rest = (int) (seconds_not_founded / 60);

    int seconds_to_remove = seconds_not_founded - (_minutes_rest * 60) ;


    int _minutes_to_remove = _minutes_rest;
    if( seconds_to_remove > this->get_seconds() ) _minutes_to_remove ++;

    this->modify_minutes(-_minutes_to_remove);

    this->seconds = 60 - seconds_not_founded;

}

void Tempo::modify_minutes(int _minutes) {

    if(_minutes >= 0 ){

        this->minutes += _minutes;

        if(this->get_minutes() >= 60){
            int _hours = (int)(this->get_minutes() / 60) ;
            this->minutes -= _hours * 60 ;
            this->modify_hours(_hours);
        }
        return;
    }

    // se houver tempo para subtrair

    //modulo do tempo em segundos recebido
    int module_minutes = ((-1) * _minutes);

    // (0 - 59) para subtrair
    if(this->get_minutes() >= module_minutes) {
        this->minutes -= module_minutes;
        return;
    }

    // se não houver tempo , nos minutos, para subtrair
    // 90 minutos - 0 minutos
    // -100 ou (30 - 0) = 30 minutos

    //sempre positivo
    int minutes_not_founded = module_minutes - this->get_minutes();

    int _hours_rest = (int) (minutes_not_founded / 60);

    int minutes_to_remove = minutes_not_founded - (_hours_rest * 60) ;


    int _hours_to_remove = _hours_rest;

    if( minutes_to_remove > this->get_minutes() ) _hours_to_remove ++;

    this->modify_hours(-_hours_to_remove);

    this->minutes = 60 - minutes_to_remove;

}

void Tempo::modify_hours(int _hours) {

    if(_hours >= 0){

        this->hours += _hours;

        if(this->get_hours() >= 24){

            int _days = (int) (this->get_hours() / 24) ;
            this->hours -= _days * 24 ;
            this->modify_days(_days);
        }

        return;

    }

    int module_hours = (-1) * _hours;

    // se não houver tempo , nas horas , para subtrair
    // -100 ou (30 - 0) = 30 horas

    if(this->get_hours() >= module_hours) {
        this->hours -= module_hours;
        return;
    }

    //sempre positivo
    int hours_not_founded = module_hours - this->get_hours();

    int _days_rest = (int) (hours_not_founded / 24);

    int hours_to_remove = hours_not_founded - (_days_rest * 24) ;


    int _days_to_remove = _days_rest;

    if( hours_to_remove > this->get_hours() ) _days_to_remove ++;

    this->modify_days(-_days_to_remove);

    this->hours = 24 - hours_not_founded;

}

void Tempo::modify_days(int _days) {
    this->days += _days;
}

long int Tempo::get_total_time() {

    long int _total_time = this->get_days() * 86400;
    _total_time += this->get_hours() * 3600;
    _total_time += this->get_minutes() * 60;
    _total_time += this->get_seconds();

    return _total_time;
}
