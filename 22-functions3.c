#include<stdio.h>
#include<ctype.h>
int biggest( int a, int b , int c)
{
	if(a>b&&a>c)
{
	return a;
}
else if(b>a&&b>c)
{
	return b;
}
else
{
	return c;
}
}
int main()
{
	int a,b,c;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	int result;
	result=biggest(a,b,c);
	printf("%d is the biggest number.",result);
	return 0;
}