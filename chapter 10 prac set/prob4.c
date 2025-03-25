#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("salary.txt","w");
    char name1[34],name2[34];
    int salary1,salary2;

    printf("enter the first employee name : ");
    scanf("%s",&name1);
    printf("enter the first employee salary : ");
    scanf("%d",&salary1);

    printf("enter the second employee name : ");
    scanf("%s",&name2);
    printf("enter the second employee salary : ");
    scanf("%d",&salary2);

    fprintf(ptr,"%s",name1);
    fprintf(ptr,"%s",", ");
    fprintf(ptr,"%d",salary1);
    fprintf(ptr,"%s","\n");
    fprintf(ptr,"%s",name2);
    fprintf(ptr,"%s",", ");
    fprintf(ptr,"%d",salary2);
    return 0;
}