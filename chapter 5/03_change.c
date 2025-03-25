#include <stdio.h>
int change(int a){
    a=78;
    printf("%d\n",a);
    return a;
}
int main()
{
    int b=27;
    change(b);  //b is remains 27
    // function passed copy of b in a instead of b
    printf("b is %d",b);
    return 0;
}