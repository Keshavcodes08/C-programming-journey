#include<stdio.h>
#include<ctype.h>
int main()
{
	char c,ch;
	char sen[100];
	int i=0;
	int j=0;
	printf("Enter a sentence: ");
	fgets(sen,100,stdin);
	printf("Enter a character of your sentece: ");
	scanf("%c",&c);
	printf("Enter a character to replace: ");
	scanf(" %c",&ch);
	while(sen[i] != '\0')
	{
		if(c==sen[i])
		{
			sen[i]=ch;
		}
		i++;
	}
	printf("%s",sen);
	return 0;
}