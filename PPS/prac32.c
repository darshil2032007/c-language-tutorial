#include <stdio.h>
// Write a C program to read and store the roll no and marks of 20 students using array. 
int main()
{
    int marks[20],roll[20];
    int no_of_students=20;
    for (int i = 0; i < no_of_students; i++)
    {
        printf("enter the number of student's roll number : ");
        scanf("%d",&roll[i]);
        printf("enter the number of student's marks : ");
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < no_of_students; i++)
    {
        printf("rollno = %d and marks = %d \n",roll[i],marks[i-1]);
    }
    
    return 0;
}