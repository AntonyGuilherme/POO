//
// Created by word2 on 01/08/2021.
//

#include "BusinessTraveller.h"

 Pager* BusinessTraveller::getPager() {
    return this->pager;
 }

BusinessTraveller::BusinessTraveller(const BusinessTraveller &businessTraveller) : Traveler(businessTraveller) {
    this->pager = new Pager(*businessTraveller.pager);
}

BusinessTraveller &BusinessTraveller::operator=(const BusinessTraveller &bussinesTraveller) {

    this->setStr(bussinesTraveller.getStr());
    this->pager = new Pager(*bussinesTraveller.pager);

    return (*this);
}

std::ostream &operator<<(std::ostream &op, const BusinessTraveller &businessTraveller) {

    std::cout << "Business : " << businessTraveller.getStr() << std::endl ;
    std::cout << "Pager : " << businessTraveller.pager->getStr() << std::endl ;

    return op;
};


