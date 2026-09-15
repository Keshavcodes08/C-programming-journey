#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter number: ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}