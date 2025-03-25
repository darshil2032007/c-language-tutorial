#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Harry";
    // printf("%d\n",strlen(st));
    char target[30];
    strcpy(target,st);//for copy string
    // printf("%s\n",target);
    char s1[] = "Hello ";
    char s2[] = "Darshil";
    strcat(s1,s2);
    // printf("%s\n",s1);
    int a = strcmp("deep","joke");
    // for remember purpose : deep joke is negative.
    // given positive or negative value as per ascii table.
    // printf("%d",a);
    // for upper case 
    // printf("%s \n",strupr(st));
    // for lower case 
    // printf("%s \n",strlwr(st));

    return 0;
}