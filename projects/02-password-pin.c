#include<stdio.h>
#include<ctype.h>
int main()
{
	int p;
	char c;
	printf("Enter your 4 digit pin:\t");
	scanf("%d",&p);
	if(p==1234)
	{
		printf("Access Granted\n");
	}
		else
		{
		printf("Access Denied\n");
		printf("Try again? (Y/N):\t");
		scanf(" %c",&c);
		c=tolower(c);
		while(c=='y')
		{
			printf("Enter your 4 digit pin:\t");
	scanf("%d",&p);
	if(p==1234)
	{
		printf("Access Granted\n");
	}
		else
		{
		printf("Access Denied\n");
		printf("Try again? (Y/N):\t");
		scanf(" %c",&c);
		c=tolower(c);
	}
		}
	}
	return 0;
}
	