#include<stdio.h>
#include<ctype.h>	
int main()
{
	int i,j,k,n;
	printf("Enter any number:\t\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("*");
		}
		for(k=n;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
		printf("*");
		}
		for(k=n;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");
	}
	return 0;
}
		
	