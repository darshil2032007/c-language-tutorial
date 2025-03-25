#include <stdio.h>
/*Create a three–dimensional array and print the address of its elements in 
increasing order.*/
int main()
{
    int arr[2][2][2]={
        {
            {1,2},
            {3,4}
        },
        {
            {5,6},
            {7,8}
        }
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("the address of arr[%d][%d][%d] is %u and value is %d\n",i,j,k,&arr[i][j][k],arr[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}