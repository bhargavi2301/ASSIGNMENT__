#include<stdio.h>
int main()
{ 
	for(int i=1;i<=8;i++)
	{
		for(int j=1;j<=i;j++)
		
		{
			printf(" %d " ,j%2);
		}
		printf("\n");
	}
}