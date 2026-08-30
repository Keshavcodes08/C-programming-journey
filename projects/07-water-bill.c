#include<stdio.h>
#include<ctype.h>
int main()
{
	int liters,bill;
	printf("Enter liters consumed: ");
	scanf("%d",&liters);
	if(liters<=50)
	{
		bill=liters*2;
	}
	else if(liters>50&&liters<=100)
	{
		bill=50*2+(liters-50)*3;
	}
	else if(liters>100&&liters<=200)
	{
		bill=50*2+50*3+(liters-100)*5;
	}
	else if(liters>200)
	{
		bill=50*2+50*3+100*5+(liters-200)*8;
	}
	printf("Total bill= %d",bill);
	return 0;
}