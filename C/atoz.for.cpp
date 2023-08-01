#include<stdio.h>
int main()
{
	int i,j;
	for(i=25;i<=30;i++)
	{
		for(j=25;j<=i;j++)
		{
		 printf("%c",&i,j++);	
		}
		printf("\n");
	}
	
} 