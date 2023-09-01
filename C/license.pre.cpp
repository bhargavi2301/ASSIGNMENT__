#include<stdio.h>
int main()
{
	int age;
	printf("enter a age");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("you eligible for license");
	}
	else
	{
		printf("not alidgible for license");
	}
	return 0;
}