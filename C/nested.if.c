#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks");
	scanf("%d,& marks");
	if(marks>=0 && marks<=100)
	{
     	if(marks>=0 & marks<=33)
      {
    	printf("fail");
      }
	    if(marks>=34 & marks<=50)
	  {
	   	printf("second class");
	  }
	    if(marks>=51 & marks<=70)
	  {
		printf("first class");
      } 
        if(marks>=71 & marks<=100)
      {
    	printf("distiction");
	  }
   }
   else
   {
	  }   
	    printf("invalid marks");
   } 
 }
