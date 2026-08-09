#include<stdio.h>
#include<ctype.h>
int main()
{
	int no;
	printf("Enter any number:\t");
	scanf("%d",&no);
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d x %d=\t %d\n",no,i,no*i);
	}
	return 0;
}