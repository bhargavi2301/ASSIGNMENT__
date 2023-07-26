#include<stdio.h>
int main()
{
	int i,j;
	
	for(int i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if( (i==1&&j>1&&j<5) || (j==1&&i>1) || (j==5&&i>1) || i==4)
			{
				printf("* ",j);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}