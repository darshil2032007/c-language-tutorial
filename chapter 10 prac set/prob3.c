#include <stdio.h>
/* Write a program to read a text file character by character and write its content 
 twice in separate file.*/
int main()
{
    char ch;
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("ch1.txt","r");
    ptr2 = fopen("ch2.txt","a");
    while(1){
        ch = fgetc(ptr1);
    
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2,"%c",ch);
            fprintf(ptr2,"%c",ch);
            printf("%c",ch);
        }
    }
    return 0;
}