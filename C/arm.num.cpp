#include<stdio.h>
int main ()
{
	int n, arm=0,r,j;
	printf("Enter any number:");
	scanf("%d",&n);
	j=n;
	while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
		
	}
    	if(j==arm)
    	printf("armstong number");
    	else
    	printf("Not");
    	return 0;
    	
    	
    	
    	
	
	
}