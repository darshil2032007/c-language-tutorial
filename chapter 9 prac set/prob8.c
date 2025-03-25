/*Create a structure representing a bank account of a customer. What fields did
you use and why?*/
#include <stdio.h>
typedef struct bankacc
{
    int accno;
    char name[15];
    char ifsc[12];
    float balance;

}acc;
int main()
{
    
    return 0;
}