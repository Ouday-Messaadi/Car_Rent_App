#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include "Account.h"
typedef struct
{
    char CarColor [50] ;
    char CarModel [50];
    float CarPriceRentPerHour ;
    Account* account ;
} car;

#endif // CAR_H_INCLUDED
