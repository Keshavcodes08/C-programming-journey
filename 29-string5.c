#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	char sen[100];
	int i,j,k;
	i=0;
	j=0;
	k=0;
	printf("Enter a sentence: ");
	fgets(sen,100,stdin);
	while(sen[i]!= '\0')
	{
		if(sen[i]=='a'||sen[i]=='e'||sen[i]=='i'||sen[i]=='o'||sen[i]=='u')
		{
			j++;
		}
		else if(isalpha(sen[i]))
			{
				k++;
			}
		i++;
	}
	printf("Vowels: %d\n",j);
		printf("Consonents: %d",k);
		return 0;
}
		