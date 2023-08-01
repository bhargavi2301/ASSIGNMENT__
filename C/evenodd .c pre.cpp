#include<stdio.h>
int main ()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	
	if(is even (num))
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
	
	
}