#include<stdio.h>
int main()
{
	char colour;
	printf("enter colour");
	scanf("%c",&colour);
	if(colour=='r')
	{
		printf("stop vihicle");
	}
	else if(colour=='y')
	{
		printf("stop and than go");
	}
	else if(colour=='g')
	{
		printf("you can go");
	}
	else
	{
	printf("invalid");
    }
}