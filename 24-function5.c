#include<stdio.h>
#include<ctype.h>
int isEven(int n)
{
	if(n%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int isPositive(int n)
{
	if(n>0)
	{
		return 1;
	}
	else if(n==0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
int analyze(int n)
{
	printf("Enter a number: ");
	scanf("%d",&n);
	int r1,r2;
	r1=isEven(n);
	if(r1==0)
	{
		printf("Even Number\n");
	}
	else
	{
	printf("Odd Number\n");
	}
	r2=isPositive(n);
	if(r2==1)
	{
		printf("Positive Number");
	}
	else if(r2==0)
	{
		printf("Zero");
	}
	else
	{
		printf("Negative Number");
	}
}
int main()
{
	int n;
	analyze(n);
}