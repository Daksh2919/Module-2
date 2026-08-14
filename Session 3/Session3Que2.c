//Session 3 Que :- 2
#include<stdio.h>
main()
{
	float base,gst,final,gstfinal;
	const float GST_RATE = 18.0;
	
	printf("Enter the base price of the zomato order : ");
	scanf("%f",&base);
	
	gst = base * GST_RATE;
	gstfinal = gst / 100;
	final = base + gstfinal;
	
	
	printf("\nBase price :%.2f",base);
	printf("\nGST (%.0f) :%.2f",GST_RATE,gstfinal);
	printf("\nfinal price :%.2f",final);
}
