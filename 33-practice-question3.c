#include<stdio.h>
int main()
{
	float wgt;
	float chrg;
	chrg=0;
	printf("Enter the weight: ");
	scanf("%f",&wgt);
	if(wgt<=1)
	{
		chrg=100;
	}
	else if(wgt<=5)
	{
		chrg=100+(wgt-1)*80;
	}
	else if(wgt<=10)
	{
		chrg=100+4*80+(wgt-5)*60;
	}
	else if(wgt>10)
	{
		chrg=100+4*80+5*60+(wgt-10)*50;
	}
	printf("Total courier charge: %f",chrg);
	return 0;
}