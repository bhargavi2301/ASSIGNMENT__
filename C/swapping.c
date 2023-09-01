#include<stdio.h>
int main()

{
	int a,b;
	
	printf("enter a value b:");
	scanf("%d", &a);
	printf("enter a value b:");
	scanf("%d",  &b);	
  a=a+b;
  b=a-b;
  a=a-b;
  printf("the value of a=%d",a);
  printf("\nthe value of b=%d",b);
	
}