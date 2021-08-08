#include <iostream>
#include "BusinessTraveler/BusinessTraveller.h"

int main() {

    BusinessTraveller * businessTraveller = new BusinessTraveller();
    std::cout << *businessTraveller << std::endl;

    BusinessTraveller * businessTraveller1 = new BusinessTraveller("42");
    std::cout << *businessTraveller1 << std::endl;


    BusinessTraveller businessTraveller1Copy = *businessTraveller;
    BusinessTraveller businessTraveller2Copy = *businessTraveller1;

    std::cout << businessTraveller1Copy << businessTraveller2Copy;

    BusinessTraveller businessTravellerCopyConstructor(businessTraveller2Copy);

    businessTravellerCopyConstructor.setStr("Teste");

    std::cout << businessTravellerCopyConstructor << businessTraveller2Copy;

    return 0;
}
