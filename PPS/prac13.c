#include <stdio.h>

int main()
{
    /*Write a c program to prepare pay slip using following data. Da = 10% of basic, Hra = 7.50% of
    basic, Ma = 300,
    Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross – Pf. */
    int nt, da, basic, hra, ma, pf, gross;
    printf("enter your basic salary : ");
    scanf("%d", &basic);
    da = 0.1 * basic;
    hra = 0.075 * basic;
    ma = 300;
    pf = 0.1250 * basic;
    gross = basic + da + hra + ma;
    nt = gross - pf;
    printf("gross : %d\n",gross);
    printf("nt : %d\n",nt);
    
    return 0;
}