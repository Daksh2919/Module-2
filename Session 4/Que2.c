//Session 4 Que 2
#include<stdio.h>
main()
{
	int price, discount, discountamount, member;
	float finalprice;
	
	printf("Enter product price : ");
	scanf("%d",&price);
	
	printf("Enter discount percentage : ");
	scanf("%d",&discount);
	
	printf("Are you member (1 = yes, 0 = no) :");
	scanf("%d",&member);
	
	//calculate normal discount
	discountamount = price * discount / 100;
	finalprice = price - discountamount;
	
	//Apply extra 5% discount for members
	if(member==1)
	{
		finalprice = finalprice - (finalprice * 5 / 100);
	}
	
	printf("Final price : %.2f\n", finalprice);
}
