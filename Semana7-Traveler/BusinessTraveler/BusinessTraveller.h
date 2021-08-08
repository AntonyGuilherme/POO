//
// Created by word2 on 01/08/2021.
//

#ifndef SEMANA7_TRAVELER_BUSINESSTRAVELLER_H
#define SEMANA7_TRAVELER_BUSINESSTRAVELLER_H

#include "./../Traveler/Traveler.h"
#include "./../Pager/Pager.h"
#include <iostream>

class BusinessTraveller : public Traveler {

private:
    Pager *pager;

public :
    BusinessTraveller() : Traveler() , pager(new Pager()) {}
    BusinessTraveller(const std::string& str) : Traveler(str) , pager(new Pager(str)){}
    BusinessTraveller(const BusinessTraveller& businessTraveller);
    Pager* getPager();
    BusinessTraveller& operator= (const BusinessTraveller &bussinesTraveller);

    friend std::ostream& operator<< (std::ostream &op, const BusinessTraveller &businessTraveller);

};


#endif //SEMANA7_TRAVELER_BUSINESSTRAVELLER_H
