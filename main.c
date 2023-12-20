#include <stdio.h>
#include <stdlib.h>
#include "Car.h"
#include "menu.h"

int main()
{
    car  * TabCar ;
    TabCar = malloc(sizeof(car));
    Account * TabAcc;
    TabAcc = malloc(sizeof(Account));
    int  i , choice , next = 0 , NbreAcc = 0, NbreCar , IdentityCard , index ;
    Account acc ;
    char  Password[20] , CarModel[20];
    while(1)
    {
        choice = Menu1();
        fflush(stdin);
        switch(choice)
        {
        case 1 :
            NbreAcc ++ ;
            TabAcc = realloc(TabAcc,NbreAcc*sizeof(Account));
            Entry_Account(&TabAcc[NbreAcc - 1]);
            Save_Account(TabAcc[NbreAcc - 1]);
            break ;
        case 2 :
            printf("\nIdentity Card :");
            scanf("%d",&IdentityCard);
            printf("\nPassword :");
            scanf("\n%s",Password);
            if( Verifie_Account(IdentityCard,Password) == 1 )
               {
                   next = 1 ;
                   printf("\nConnected successfuly") ;
               }
            for ( i=0 ; i< NbreAcc ;i++)
                if ( TabAcc[i].Id == IdentityCard )
                {
                    index = i ;
                    break ;
                }
            while(next == 1)
            {
                choice = Menu2();
                fflush(stdin);
                switch(choice)
                {
                case 1 :
                    NbreCar ++ ;
                    TabCar = realloc( TabCar , NbreCar * sizeof(car));
                    AddCar(&TabCar[NbreCar - 1],&TabAcc[index]);
                    break;
                case 2 :
                    printf("\nEnter the car's model you want :\n");
                    gets(CarModel);
                    rentCar(CarModel,TabCar,NbreCar,&TabAcc[index]);
                    break ;
                case 0 :
                    next = 0 ;
                    break ;
                }
            }
            break ;
        case 0 :
            break ;
        default :
            break ;
        }

    }
}
