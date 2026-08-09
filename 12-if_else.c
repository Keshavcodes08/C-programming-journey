#include<stdio.h>
#include<ctype.h>
int main()
{
	int n;
	printf("Enter any number:\t");
	scanf("%d",&n);
	if(n % 2 ==0)
	{
		printf("Even number\n");
	}
	else
	{
		printf("Odd number\n");
	}
	return 0;
}