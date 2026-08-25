//Session 14 Que 2
#include<stdio.h>
main()
{
	int n;//n is a variable for user input
	
	printf("Enter number : ");//user enter the number 
	scanf("%d",&n);
	
	if (n%2==0)//n%2==0 means n is divide by 2 than print number is even
	//number is not divide by 2 the number is odd
	{
		printf("Number is Even");
	}
	
	else
	{
		printf("Number is Odd");
	}
}
