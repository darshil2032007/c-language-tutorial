/*Create an array of 5 complex numbers created in Problem 5 and display them 
with the help of a display function. The values must be taken as an input from 
the user.*/
#include <stdio.h>

typedef struct complexno{
    int real;
    int img;
}cn;
void show (cn c){
    printf("complex number is %d + %di \n",c.real,c.img);
}
int main()
{
    cn com[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the real part : ");
        scanf("%d",&com[i].real);
        printf("enter the imagenory part : ");
        scanf("%d",&com[i].img);
        
    }
    for (int i = 0; i < 5; i++)
    {
        show(com[i]);

    }
    
    return 0;
}