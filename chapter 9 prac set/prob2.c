#include <stdio.h>
/*Write a function ‘sumVector’ which returns the sum of two vectors passed to it. 
The vectors must be two–dimensional.*/
typedef struct vector{
    int i;
    int j;
}V;
V sumvector(V v1,V v2)
{
    V v3={v1.i+v2.i,v1.j+v2.j};
    return v3;
};

int main()
{
    V v1 ={2,3};
    V v2 ={7,9};
    V v3 = sumvector(v1,v2);
    printf("the value of vector v3 is (%d i + %d j) \n",v3.i,v3.j);
    return 0;
}