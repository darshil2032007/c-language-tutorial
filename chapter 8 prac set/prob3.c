#include <stdio.h>
/*Write your own version of strlen function from <string.h> */
int strlen(char str[]){
    int i = 0;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    int count = i-1;
    return count;
}
int main()
{
    char str[] = "Hello";
    printf("length of string is %d",strlen(str));
    return 0;
}