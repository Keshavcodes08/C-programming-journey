#include<stdio.h>
int main()
{
	int sal,tax;
	printf("Enter your salary: ");
	scanf("%d",&sal);
	if(sal<=250000)
	{
		tax=0;
	}
	else if(sal<=500000)
	{
		tax=250000*0+(sal-250000)*0.05;
	}
	else if(sal<=1000000)
	{
		tax=250000*0+250000*0.05+(sal-500000)*0.1;
	}
	else if(sal<=2000000)
	{
		tax=250000*0+250000*0.05+500000*0.1+(sal-1000000)*0.2;
	}
	else 
	{
		tax=250000*0+250000*0.05+500000*0.1+1000000*0.2+(sal-2000000)*0.3;
	}
	printf("Total tax: %d",tax);
	return 0;
}