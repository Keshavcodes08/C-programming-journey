#include<stdio.h>
int main()
{
	int i,n,prime;
	prime=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			prime++;
		}
	}
	if(prime!=0)
	{
		printf("Not prime");
	}
	else
	{
		printf("Prime");
	}
	return 0;
}