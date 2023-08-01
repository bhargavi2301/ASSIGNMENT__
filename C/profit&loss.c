#include<stdio.h>
int main()
{
	int sellingprice, costprice;
	printf("enter selling price and cost price");
	scanf("%d %d",&sellingprice,&costprice);
	
	if(sellingprice>costprice)
	{
		printf("profit");
	}
	else if(costprice>sellingprice)
	{
		printf("loss");
	}
	return 0;
}