#include<stdio.h>
int main()
{
	int days;
	printf("enter a name");
	scanf("%d",&days);
	switch(days)
	{
		case 1:
			printf("in january 31 days");
		break;
		case 2:
			printf("  in february 28/29 days");
		break;
		case 3:
			printf(" in march 31 days");
		break;
		case 4:
			printf(" in april 30 days");
		break;
		case 5:
			printf(" in may 31 days");
		break;
		case 6:
			printf("in june 30 days");
		break;
		case 7:
			printf(" in july 30 days");
		break;
		
		case 8:
		  printf(" in august 30 days");
		break;
		
		case 9:
		 printf("in septmber 30 days");
		 break;
		 
		 case 10:
		 printf(" in october 31 days");
		 break;
		 
		case 11:
		 printf("in november 30 days");
		 break;
		 
		 case 12:
		 	printf("in december 31 days");
		 	break;
		 	
		default:
			printf("invalid days");
	}
}