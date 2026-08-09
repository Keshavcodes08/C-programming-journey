#include<stdio.h>
#include<ctype.h>
int main()
{
	printf("                                STUDENT RESULT SYSTEM");
	char n;
	int m,a;
	printf("Enter First letter of name:\t");
	scanf(" %c",&n);
	printf("Enter age:\t");
	scanf("%d",&a);
	printf("Enter marks:\t");
	scanf("%d",&m);
	if(a>=18)
	{
		printf("Adult student\n");
	}
	else
	{
		printf("Minor student\n");
	}
	if(m>=90&&m<=100)
	{
		printf("Grade A\n");
	}
	else if(m>=75)
	{
		printf("Grade B\n");
	}
	else if(m>=40)
	{
		printf("Grade C\n");
	}
	else
	{
		printf("Failed\n");
	}
	if(m%2==0)
	{
		printf("Marks are even\n");
	}
	else
	{
		printf("Marks are odd\n");
	}
	int s=m/10;
	while(m>=1)
	{
		printf("%d\n",m);
		m--;
	}
	while(s>=1)
	{
		printf("*");
		s--;
	}
	return 0;
}