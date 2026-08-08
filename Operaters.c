#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter number 1:\t");
	scanf("%d",&n1);
	printf("Enter number 2:\t");
	scanf("%d",&n2);
	{
		printf("%d + %d = %d\n", n1, n2, n1 + n2);
		printf("%d - %d = %d\n", n1, n2, n1 - n2);
printf("%d * %d = %d\n", n1, n2, n1 * n2);
printf("%d / %d = %d\n", n1, n2, n1 / n2);
printf("%d %% %d = %d\n", n1, n2, n1%n2);
	}
	return 0;
}