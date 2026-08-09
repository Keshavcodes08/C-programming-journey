#include<stdio.h>
int main()
{
        int n1,n2;
        printf("Enter number 1:\t");
        scanf("%d",&n1);
        printf("Enter number 2:\t");
        scanf("%d",&n2);
        if(n1>n2)
        {
                printf("%d is greater.",n1);
        }
        else if(n1==n2)
        {
                printf("Both are equal");
        }
        else
        {
                printf("%d is greater.",n2);
        }
        return 0;
}