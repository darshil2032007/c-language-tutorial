#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d", a, ++a, a++);
    // in this term evalution will done in right to left format
    // compiler print 6 6 4
    // another answer is 4 5 5
    
    return 0;
}