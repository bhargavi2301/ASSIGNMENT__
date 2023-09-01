#include<stdio.h>
int main()
{
	char name[20]="bhargavi";
	char birthdate[20]= "october 23, 2001";
	 const char * address[20]= "main street kodinar, girsomnath";
	int age="22";
	
	printf("your name %s\n",&name);
	printf("your birth date %c\n",&birthdate);
	printf("your address %c\n",&address);
	printf("your age %d\n",&age);
}