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
	while(sen[i] != '\0')
	{
		if(sen[i]=='a'||sen[i]=='e'||sen[i]=='i'||sen[i]=='o'||sen[i]=='u')
		{
			j++;
		}
		i++;
	}
	printf("%d",j);
	return 0;
}