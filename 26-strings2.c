#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	char sen[100];
	int i=0;
	int j=0;
	printf("Enter a sentence: ");
	fgets(sen,100,stdin);
	printf("Enter a character of your sentece: ");
	scanf("%c",&c);
	
	while(sen[i] != '\0')
	{
		if(c == sen[i])
		{
			j++;
		}
		i++;
	}
	printf("%d",j);
	return 0;
}