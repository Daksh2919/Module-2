//Session 4 Que 3
#include<stdio.h>
int Eligiblefun(int age,float ordervalue)
{
	if(age>=18 && ordervalue>500)
	{
		return 1; //true
	}
	else
	{
		return 0; //false
	}
}
main()
{
	int age;
	float ordervalue;
	
	printf("Enter age : ");
	scanf("%d",&age);
	
	printf("Order value : ");
	scanf("%f",&ordervalue);
	
	if(Eligiblefun(age, ordervalue))
	{
		printf("User is eligible for the offer.");
	}
	else
	{
		printf("User is not eligible for the offer.");
	}
	
}
