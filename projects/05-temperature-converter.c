#include<stdio.h>
int main()
{
	float temp;
	float ctemp;
	printf("Enter temperature: ");
	scanf("%f",&temp);
	ctemp=(temp-32)*5/9;
	printf("%f celsius",ctemp);
	return 0;
}