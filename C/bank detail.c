#include<stdio.h>
float bankdetails()
{
   float number;
   printf("enter your bank detail");
   scanf("%f",&number);


}
float bankbalance()
{
	float balance;
	printf("enter your balance");
	scanf("%f",&balance);
}
float bankdeposit()
{
	float deposit;
	printf("enter your passbook ");
	scanf("%f",&deposit);
	
}
float withdrawal()
{
	float check;
	printf("enter your check detail");
	scanf("%f",&check);
}
int main()
 {
 	printf("enter your choice\n");
 	printf("\n",bankdetails());
 	printf("\n",bankbalance());
 	printf("\n",bankdeposit());
 	printf("\n",withdrawal());

 }

