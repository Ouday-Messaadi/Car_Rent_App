#include "menu.h"
#include <stdio.h>

int Menu1()
{
    int choice ;
    printf("\n---------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t1.  Sign Up    ");
    printf("\n\t\t2.  Sign In    ");
    printf("\n\t\t0.  Quit    ");
    printf("\n---------------------------------------------------------------------------------------------------\n");
    printf("\nChoice :");
    scanf("%d",&choice);
    return choice ;
}

/*/------------------------------------------------------------------------------------/*/

int Menu2()
{
    int choice ;
    printf("\n---------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t1.  Add a car   ");
    printf("\n\t\t2.  Rent a car   ");
    printf("\n\t\t0.  Back      ");
    printf("\n---------------------------------------------------------------------------------------------------\n");
    printf("\nChoice :");
    scanf("%d",&choice);
    return choice ;
}
