#include "Account.h"
#include <string.h>
#include <stdio.h>

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
/*------------------------------------------------------------------------------------------------*/
void Save_Account( Account acc)
{
    FILE * ficAcc ;
    ficAcc = fopen("Account.txt","a");
    fprintf(ficAcc,"\n%s%s",acc.FirstName,acc.password);
    fclose(ficAcc);
}

/*------------------------------------------------------------------------------------------------*/


int Verifie_Account(char * FirstName ,char * Password)
{
    char CompareCoor[40];
    strcat(CompareCoor,FirstName);
    strcat(CompareCoor,Password);
    char CompareFile[40];
    FILE * ficAcc ;
    ficAcc = fopen("Account.txt","r");
    while ( fscanf(ficAcc,"%s",CompareFile) == 1)
    {
    if (strcmp(CompareFile,CompareCoor)==0)
        return 1 ;
    }
    fclose(ficAcc);
    return 0 ;
}
