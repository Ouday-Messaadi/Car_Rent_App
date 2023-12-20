#include <string.h>
#include "car.h"

void AddCar (car* car1,Account* acc)
{
    printf("Please, enter the car model :");
    gets(car1.CarModel);
    printf("Enter the color of the car :");
    gets(car1.CarColor);
    printf("Enter the price of the car per hour :");
    scanf("%f",car1.CarPriceRentPerHour);
    car1->accountOwner=acc ;
    car1->accountClient=NULL;
}
//*************************************************************//
void postcar(car*car1,Account* acc)
{
    char ch[50];
    char ch1[50];
    float price ;
    do{
    printf("Enter the car's color you want : ");
    gets(ch);
    }while(strcmp(ch,car1.CarColor)!=0);
    do{
        printf("Enter the car's model you want :");
        gets(ch1);
    }while(strcmp(ch1,car1.CarModel)!=0);
    do{
        printf("Enter the car's price you want per hour :");
        scanf("%f",price);
    }while(price!=car1.CarPriceRentPerHour);

}

