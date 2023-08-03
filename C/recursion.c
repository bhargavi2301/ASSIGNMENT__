#include<stdio.h>

int number(int a)
{
  if(a>0)
  {
  	printf("%d \n",a);
  	a++;
  	
  	number(a);
 }	
 else
 {
 	printf ("task complete");
 }
	
}
  
 main()
{
	int num;
	scanf("%d",&num);
	number(num);
}