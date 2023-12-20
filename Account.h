#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include "Date.h"


typedef struct
{
    char FirstName[20];
    char LastName[20];
    int Id;
    char password[20] ;
    Date *Birthdate ;
}Account ;

void Entry_Account (Account * );
void Post_Account (Account);


#endif // ACCOUNT_H_INCLUDED
