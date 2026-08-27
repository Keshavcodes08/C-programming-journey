#include<stdio.h>
#include<ctype.h>
int main()
{
char sen[100];
char sen2[100];
char c;
int i=0,j=0;
printf("Enter your sentence: ");
fgets(sen,100,stdin);
while(sen[i]!='\0')
{
	i++;
	}
	if(sen[i-1] =='\n')
	{
		i--;
		}
		while(i >=0)
		{
			sen2[j]=sen[i];
			i--;
			j++;
		}
		sen2[j]='\0';
		printf("%s",sen2);
		return 0;
}
			