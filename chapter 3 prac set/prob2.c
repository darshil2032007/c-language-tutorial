#include <stdio.h>

int main()
{
    /* Write a program to determine whether a student has passed or failed. To pass, a
     student requires a total of 40% and at least 33% in each subject. Assume there
     are three subjects and take the marks as input from the user.*/
    int maths_marks, average;
    printf("enter your marks of maths :");
    scanf("%d", &maths_marks);
    int physics_marks;
    printf("enter your marks of physics :");
    scanf("%d", &physics_marks);
    int chemistry_marks;
    printf("enter your marks of chemistry :");
    scanf("%d", &chemistry_marks);
    average = (maths_marks + physics_marks + chemistry_marks)/3;
    printf("average marks is %d\n", average);
    if (maths_marks < 33 || physics_marks < 33 || chemistry_marks < 33)
    {
        printf("you are fail in individual subject.\n");
    }

    else if (average >= 40)
    {
        printf("you are pass \n congrets\n");
    }
    else
    {
        printf("You are failed due less percentage\n");
    }
    return 0;
}