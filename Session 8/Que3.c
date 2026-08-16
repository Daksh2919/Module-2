//Session 8 Que 3
#include<stdio.h>
void increaseFollowersByValue(int followers)
{
	followers = followers + 1000;
	printf("Inside by value function : %d\n",followers);
}

void increaseFollowersByReference(int *followers)
{
	*followers = *followers + 1000;
	printf("Inside by reference function : %d\n",*followers);
}

int main()
{
	int followers;
	
	printf("Enter followers : ");
	scanf("%d",&followers);
	
	printf("Original followers :%d\n",followers);
	
	increaseFollowersByValue(followers);
	printf("After by Value function : %d\n", followers);
	
	increaseFollowersByReference(&followers);
	printf("After by reference function :%d\n",followers);
}
