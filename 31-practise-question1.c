#include<stdio.h>
int main()
{
	float hrs;
	float bill;
	printf("Enter hours: ");
	scanf("%f",&hrs);
	if(hrs<=2)
	{
		bill= hrs*20;
	}
	else if(hrs>2&&hrs<=5)
	{
		bill=2*20+(hrs-2)*30;
	}
	else if(hrs>5&&hrs<=10)
	{
		bill=2*20+3*30+(hrs-5)*40;
	}
	else if(hrs>10)
	{
		bill=2*20+3*30+5*40+(hrs-10)*60;
	}
	printf("Total bill: %f",bill);
	return 0;
}
	