#include <stdio.h>
#include <string.h>
/*Write a program to decrypt the string encrypted using encrypt function in 
problem 6. */
int main()
{
    char st[] = "nfsb!qj{{b!gsjehf!lf!boebs!ibj/";
    for (int i = 0; i < strlen(st); i++)
    {
        st[i] = st[i] - 1;
    }
    printf("%s",st);
    return 0;
}