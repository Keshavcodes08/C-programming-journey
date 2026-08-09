#include<stdio.h>
#include<ctype.h>
int main()
{
        int marks;
        printf("Enter your marks\t");
        scanf("%d",&marks);
        if(marks>=90&&marks<=100)
        {
                printf("A Grade congrats");
        }
        else if(marks>=75)
        {
                printf("B Grade cool");
        }
        else if(marks>=40)
        {
                printf("C grade okay");
        }
        else
        {
                printf("Failed son rip");
        }
        return 0;
}
