#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "car.h"

void AddCar (car* car1,Account* acc)
{
    car1->accountOwner = malloc(sizeof(Account));
    car1->accountClient = malloc(sizeof(Account));
    printf("\nPlease, enter the car model :");
    gets(car1->CarModel);
    printf("\nEnter the color of the car :");
    gets(car1->CarColor);
    printf("\nEnter the price of the car per hour :");
    scanf("%f",&car1->CarPriceRentPerHour);
    car1->accountOwner=acc ;
    car1->accountClient=NULL;
}
//*************************************************************//

void postcar(car car1)
{
    printf("\nThe car's color is  : %s  \n",car1.CarColor);
    printf("\nThe car's model is  : %s  \n",car1.CarModel);
    printf("\nThe car's price per hour is : %f  \n",car1.CarPriceRentPerHour);
    printf("\nThe car owner is : ");
    Post_Account (*car1.accountOwner);
    if (car1.accountClient != NULL)
    {
    printf("\nThe car client is : ");
    Post_Account (*car1.accountClient);
    }
}


//*************************************************************//

void rentCar(char * ch, car * cars ,int NbreCars ,Account* acc)
{
    int i , test = -1;
    for ( i=0 ; i<NbreCars ; i++)
    {
        if (strcmp(ch,cars[i].CarModel)==0)
        {
            cars[i].accountClient = acc  ;
            printf("\nCar rented successfully\n ");
            test = 0;
        }
    }
    if (test == -1)
        printf("\nThe car's model is not available, Please choose another model\n");
}
