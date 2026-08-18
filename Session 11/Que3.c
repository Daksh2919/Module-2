//Session 11 Que 3
#include<stdio.h>
main()
{
	int orders[5] = {250, 152, 452, 555, 860},i;
	int *ptr = orders;
	
	for (i = 0; i < 5; i++)
	{
		printf("Order Amount : %d, Address : %p\n", *(ptr + i), (void *)(ptr + i));
	}
}
