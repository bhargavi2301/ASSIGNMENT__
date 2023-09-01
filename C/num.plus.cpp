#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\n%d",i);
		sum=sum+i;
	}
	printf("\nsum=%d",sum);
}