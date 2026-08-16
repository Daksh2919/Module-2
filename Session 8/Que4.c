//Session 8 Que 4
#include<stdio.h>
#include<string.h>
void formatPrice(int price, char result[])
{
	if(price>=1000)
	{
		sprintf(result, "%d,%d", price / 1000, price % 1000);
	}
	else
	{
		sprintf(result, "%d", price);
	}
}

int main()
{
	char price1[30], price2[30], price3[30];
	
	formatPrice(1599, price1);
	formatPrice(24999, price2);
	formatPrice(799, price3);
	
	printf("Laptop: %s\n", price1);
	printf("Headphone: %s\n", price2);
	printf("Mouse: %s\n", price3);
}
