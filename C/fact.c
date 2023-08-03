#include<stdio.h>
int main()
{
	int n, fact=1, i;
	printf("enter any number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("fact %d is:%d",i ,fact);
	
	
	
}
