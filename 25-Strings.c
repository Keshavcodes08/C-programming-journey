#include<stdio.h>
#include<ctype.h>
int main()
{
	char name[50];
	printf("Enter your name: \n");
	fgets(name,50,stdin);
	printf("Hi %s, How are you bro!",name);
	return 0;
}