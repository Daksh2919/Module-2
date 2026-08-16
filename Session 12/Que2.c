//Session 12 Que 2
#include<stdio.h>
#include<string.h>
struct fooditem 
{
	char itemname[20];
	int price;
	float rating;
};

main()
{
	struct fooditem menu[3] = {{"Paneer butter masala", 220,4.5},{"Veg biryani", 180, 4.3},{"Masala Dosa", 120, 4.6}};
	int i;
	printf("----- Zomato Menu -----\n");
	
	for(i=0;i<3;i++)
	{
		printf("Item name : %s\n", menu[i].itemname);
		printf("Price : %d\n",menu[i].price);
		printf("Rating :%.1f\n",menu[i].rating);
	}
}
