#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks:");
	scanf("%d",&marks);
	
	if(marks<=40)
	{
		printf("you will pass:");
	}
	if(marks>=40)
	{
		printf("pass class:");
	}
	if(marks>=50)
	{
		printf("second class:");
	}
	if(marks>=60)
	{
		printf("first class:");
	}
	if(marks>=70)
	{
		printf("distriction:");
	}
	 
	
}