#include<stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(num>0)
	{
		printf("the number is positive");
	}
	else if(num<0)
	{
		printf("the nuber is nagative");
	}
	else
	{
		printf("the number is zero");
	}
}