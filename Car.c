#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "car.h"

void AddCar (car* car1,Account* acc)
{
    car1->accountOwner = malloc(sizeof(Account));
    car1->accountClient = malloc(sizeof(Account));
    printf("Please, enter the car model :");
    gets(car1->CarModel);
    printf("Enter the color of the car :");
    gets(car1->CarColor);
    printf("Enter the price of the car per hour :");
    scanf("%f",car1->CarPriceRentPerHour);
    car1->accountOwner=acc ;
    car1->accountClient=NULL;
}
//*************************************************************//

void postcar(car car1)
{   
    printf("\nThe car's color is  : %s  \n",car1.CarColor);
    printf("\nThe car's model is  : %s  \n",car1.CarModel);
    printf("\nThe car's price per hour is : %f  \n",car1.CarPriceRentPerHour);
    printf("The car owner is : "\n);
    Post_Account (*car1.accountOwner);
    if (car1.accountClient != NULL)
    {
    printf("The car client is : "\n);
    Post_Account (*car1.accountClient);
    }
}


//*************************************************************//

void rentCar(car*car1, Account* acc)
{
    char ch[50];

     printf("\nEnter the car's model you want :\n");
        gets(ch);
        if (strcmp(ch,car1.CarModel)==0)
        {
            car1.accountClient=acc  ;
        }
        else printf("\nThe car's model is not available, Please choose another model\n");



}
