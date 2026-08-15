//Session 7 Que 4
#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%d ",(i + j)%2);
		}
		printf("\n");
	}
}
