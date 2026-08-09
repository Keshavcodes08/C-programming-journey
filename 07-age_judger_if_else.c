#include<stdio.h>
#include<ctype.h>
int main()
{
        int age;
        printf("Enter your age:\t");
        scanf("%d",&age);
        if(age<13)
        {
                printf("You are a child fool");
        }
        else if(age>=13&&age<=17)
        {
                printf("Goofy teenager");
        }
        else if(age>=18&&age<=59)
        {
                printf("Already an adult and look at you");
        }
        else if(age>=60&&age<110)
        {
                printf("Respectfull Senior sir/maam");
        }
        else
        {
                printf("Go back to mars bro");
        }
        return 0;
}