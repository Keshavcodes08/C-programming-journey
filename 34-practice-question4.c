#include<stdio.h>
int main()
{
	float sal,yrs,bon,total,fsal,tax;
	printf("Enter Basic salary: ");
	scanf("%f",&sal);
	printf("Enter years if service: ");
	scanf("%f",&yrs);
	if(yrs>=5)
	{
		bon=sal*0.1;
	}
	else
	{
		bon=sal*0.05;
	}
	total= sal+bon;
	if(total>50000)
	{
		tax=total*0.10;
		fsal=total-tax;
	}
	else
	{
		tax=0;
		fsal=total;
	}
	printf("Bonus: %f\n",bon);
	printf("Gross salary: %f\n",total);
	printf("Tax: %f\n",tax);
	printf("Final salary: %f\n",fsal);
	return 0;
}