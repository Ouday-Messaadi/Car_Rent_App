#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

typedef struct
{
    int day ;
    int month ;
    int year ;
}Date ;

void Entry_Date(Date *);
void Post_Date(Date);
void generate_Date(Date *);

#endif // DATE_H_INCLUDED
