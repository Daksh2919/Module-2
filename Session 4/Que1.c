//Session 4 Que 1 
#include<stdio.h>
float calculatetotal(float a, int b)
{
	float total;
	
	printf("Enter item price : ");
	scanf("%f",&a);
	
	printf("Enter quantity : ");
	scanf("%d",&b);
	
	total = a * b;
};

main()
{
	float total;
	
	total = calculatetotal(0, 0);
	
	printf("Total bill : %.2f",total);
}
