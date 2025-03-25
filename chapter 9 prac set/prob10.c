/* Solve problem 9 for time using ‘typedef’ keyword.*/
#include <stdio.h>
typedef struct date {
    int dd ;
    int mm;
    int yyyy;

}dmy;
int compare (dmy d1,dmy d2){
// if d1 is in the future, return 1;
if (d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd == d2.dd )
{
    return 0;
}
if (d1.yyyy > d2.yyyy)
{
    return 1;
}
if (d1.yyyy < d2.yyyy)
{
    return -1;
}
if (d1.mm > d2.mm)
{
    return 1;
}
if (d1.mm < d2.mm)
{
    return -1;
}
if (d1.dd > d2.dd)
{
    return 1;
}
if (d1.dd < d2.dd)
{
    return -1;
}

}

int main()
{
    dmy d1={20,3,2007};
    dmy d2={27,3,2007};
    printf("%d \n",compare(d1,d2));

    return 0;
}