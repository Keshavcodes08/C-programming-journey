#include<stdio.h>
#include<ctype.h>
int main()
{
	int i,no;
	printf("Enter any number:\t");
	scanf("%d",&no);
	i=1;
	while(i<=10)
	{
		printf("%d x %d = %d\n", no,i, no*i);
		i++;
	}
	return 0;
}