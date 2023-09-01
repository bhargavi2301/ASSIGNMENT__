#include<stdio.h>
int main()
{
	int vovel;
	printf("enter a vovel");
	scanf("%d",&vovel);
	switch(vovel)
	{
		
		
		case 1:
			printf("a");
			break;
		case 2:
			printf("e");
			break;
		case 3:
			printf("i");
			break;
		case 4:
			printf("o");
			break;
		case 5:
			printf("u");
			break;
			
			default:
				printf("constant");
	}
}