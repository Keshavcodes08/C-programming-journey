#include<stdio.h>
int main()
{
	int i,n,prime;
	i=2;
	prime=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n<=1)
	{
		prime=0;
	}
	else
	{
		while(i<=n-1)
		{
			if(n%i==0)
			{
				prime=0;
				break;
			}
			i++;
		}
	}
		if(prime==1)
		{
			printf("Prime number");
		}
		else
		{
			printf("Not a Prime number");
		}
		return 0;
}
		