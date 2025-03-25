#include <stdio.h>

int main()
// 1. && (AND) → is true when both the conditions are true  
// a. “1 and 0” is evaluated as false. 
// b. “0 and 0” is evaluated as false. 
// c. “1 and 1” is evaluated as true. 
// 2. || (OR) → is true when at least one of the conditions is true. (1 or 0 → 1) (1 or 1 → 1) 
// 3. ! (NOT) → returns true if given false and false if given true 
// a. !(3==3) → evaluates to false  
// b. !(3>30) → evaluates to true.
{
    int a=0; int b=0;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    if(a && b){
        printf("both are true\n");
    }
    // is same as writing ....
    if(a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
}