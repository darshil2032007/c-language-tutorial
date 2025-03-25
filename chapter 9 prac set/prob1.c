#include <stdio.h>
// Create a two-dimensional vector using structures in C. 
struct vector{
    int i;
    int j;
};
int main()
{
    struct vector v1 = {5,6};
    printf("2-dimensional vector is (%d i + %d j) \n",v1.i,v1.j);
    return 0;
}