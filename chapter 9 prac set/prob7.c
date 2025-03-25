/*Write problem 5’s structure using ‘typedef’ keywords. */
#include <stdio.h>
typedef struct complexno{
    int real;
    int img;

}cn;
int main()
{
    cn c1={2,5};
    printf("complex number is (%d + %d i) \n",c1.real,c1.img);
    return 0;
}