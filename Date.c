#include "Date.h"
#include <stdio.h>
#include <time.h>

void Entry_Date(Date * date)
{
    do
    {
        printf("\nDay :");
        scanf("%d",&date->day);
    }
    while(( date->day >31  ) || (date->day <=0));
     do
    {
        printf("\nMonth :");
        scanf("%d",&date->month);
    }
    while(( date->month >12  ) || (date->month <=0));
    printf("\nYear :");
    scanf("%d",&date->year);
}


/*------------------------------------------------------------------------------------------------*/

void Post_Date(Date date)
{
    printf("%d/%d/%d",date.day,date.month,date.year);
}

/*------------------------------------------------------------------------------------------------*/

void generate_Date(Date * date)
{
    time_t currentTime ;
    time(&currentTime);
    struct tm *localTime = localtime(&currentTime);
    date->day = localTime->tm_mday;
    date->month = localTime->tm_mon + 1;
    date->year = localTime->tm_year + 1900;
}




