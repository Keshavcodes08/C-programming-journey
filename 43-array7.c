#include<stdio.h>
int main()
{
	int i,key,found=0;
	int arr[5]={10,20,30,40,50};
	printf("Enter number to search: ");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(arr[i]==key)
		{
		printf("Element at index %d",i+1);
		found=1;
		break;
		}
	}
	if(found==0)
	{
		printf("Element not found.");
	}
	return 0;
}