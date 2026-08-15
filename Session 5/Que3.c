//Session 5 Que 3
#include<stdio.h>
main()
{
	int amount, discount, finalamount;
	
	printf("Enter total cart amount : ");
	scanf("%d",&amount);
	
	if(amount>2000)
	{
		discount = amount * 0.20;
		
		if(discount>0)
		{
			finalamount = amount - discount;
		}
	}
	
	else
	{
		if(amount>1000)
		{
			discount = amount * 0.10;
			finalamount = amount - discount;
		}
		else
		{
			discount = 0;
			finalamount = amount;
		}
	}
	
	printf("Discount : Rs. %d\n",discount);
	printf("Final amount to pay: Rs. %d\n",finalamount);
}
