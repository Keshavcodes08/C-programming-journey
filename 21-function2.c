#include<stdio.h>
int square(int n)
{
	return n*n;
}
int main()
{
	int n,result;
	printf("Enter number:\t");
	scanf("%d",&n);
	result= square(n);
	printf("%d",result);
	return 0;
}