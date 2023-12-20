#include "Account.h"
#include <string.h>

void Entry_Account (Account * acc )
{
    acc->Birthdate = malloc(sizeof(Date));
    printf("\nFirst name :");
    scanf("%s",acc->FirstName);
    printf("\nLast name :");
    scanf("%s",acc->LastName);
    do{
    printf("\nChoose a password ( 4 caracters minimum ):");
    scanf("%s",acc->password);
    }while( strlen( acc->password)< 4 );
    printf("\nIdentity card :");
    scanf("%d",acc->Id);
    printf("\nBirth date :");
    Entry_Date(acc->Birthdate);
}

/*------------------------------------------------------------------------------------------------*/

void Post_Account (Account acc)
{
    printf("\nFirst name :",acc.FirstName);
    printf("\nLast name :",acc.LastName);
    printf("\nIdentity card :",acc.Id);
    printf("\nBirth date :");
    Post_Date(*acc.Birthdate);
}
