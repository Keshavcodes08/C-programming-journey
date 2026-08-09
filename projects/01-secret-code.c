#include<stdio.h>
#include<ctype.h>
int main()
{
        int no,i;
        i=1;
        char c;
        printf("Enter The secret code:\t");
        scanf("%d",&no);
        if(no==59)
        {
                printf("Access Granted");
        }
        else
        {
                printf("Access Denied\n");
                printf("Press Y to try again N to quit\t");
                scanf(" %c", &c);
                c=tolower(c);
                while(c=='y')
                {
                                printf("Enter The secret code:\t");
        scanf("%d",&no);
        if(no==59)
        {
                printf("Access Granted");
        }
        else
        {
                printf("Access Denied\n");
                printf("Press Y to try again N to quit\t");
                scanf(" %c", &c);
                c=tolower(c);
        }
                }
        }
        return 0;
}

