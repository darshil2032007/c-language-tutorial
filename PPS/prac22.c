#include <stdio.h>
/*Write a program to calculate average and total of 5 students for 3 subjects (use nested for 
loops)*/
int main()
{
    int nu_students=5;
    int nu_subjects=3;
    int marks[5][3];
    int total;
    float avg;

    for (int i = 0; i < nu_students; i++)
    {
        printf("enter the marks of student %d\n",i+1);
        for (int j = 0; j < nu_subjects; j++)
        {
            printf("subject %d \n",j+1);
            scanf("%d",&marks[i][j]);
        }
        
    }
    for (int i = 0; i < nu_students; i++)
    {
        total =0;
        for (int j = 0; j < nu_subjects; j++)
        {
            total += marks[i][j];
        }
       avg = total/(float)nu_subjects;
       printf("student %d, total marks = %d , avg = %.2f\n",i+1,total,avg); 
    }
    
    return 0;
}