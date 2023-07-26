#include<stdio.h>
int main ()
{
	int i,j;
	
	for (int i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			int product=i*j;
			printf("%d*%d=%d\n",i,j,product);
		}
		 printf("\n");
	}

	
	

}