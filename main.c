#include <stdio.h>

int main()
{
	float balance , interestamount ;
	char type , answer ;
	int age ;
	
	
	printf("Enter age of the account holder : ");
	scanf("%d"  , &age);
	
	while(age >= 60)
	{
	
	printf("enter account type  : ");
	scanf("%s"  , &type);
	
	printf("enter balance of the amount  : ");
	scanf("%f"  , &balance);
	
	if(type == 'S')
	{
		if(balance <= 8000 )
		{
		 interestamount	= balance * 0.04 ;
		}
		else if(balance > 8000){
		interestamount  =  balance * 0.08 ;	
		}
		
	}
	else if(type == 'F')
	{
	if(balance <= 8000 )
		{
		interestamount	 = balance * 0.1 ;
		}
		else if(balance > 8000){
		interestamount	 = balance * 0.15 ;	
		}	
	} 
	puts("");
	printf("Corresponding interest amount to be payed : %.2f\n "  , interestamount);
	
	printf("Enter age of the account holder : ");
	scanf("%d"  , &age);
	
	if(age < 60)
	{
		printf("Not a senior citizen");
	}
	
}
	return 0;
  }