/*Write a structure capable of storing date. Write a function to compare those 
dates.*/
#include <stdio.h>
struct date {
    int dd ;
    int mm;
    int yyyy;

};
int compare (struct date d1,struct date d2){
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
    struct date d1={20,3,2007};
    struct date d2={27,3,2007};
    printf("%d \n",compare(d1,d2));

    return 0;
}