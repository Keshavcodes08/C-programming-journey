#include<stdio.h>
int main()
{
	int i,j,r1,r2,r3;
	r1=0;
	r2=0;
	r3=0;
	int arr[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter no.");
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<1;i++)
	{
		for(j=0;j<3;j++)
		{
			r1=r1+arr[i][j];
		}
	}
	for(i=1;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			r2=r2+arr[i][j];
		}
	}
	for(i=2;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			r3=r3+arr[i][j];
		}
	}
	printf("Row 1= %d\nRow 2= %d\nRow 3= %d", r1,r2,r3);
	return 0;
}