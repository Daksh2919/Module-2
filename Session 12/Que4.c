//Session 12 Que 4
#include<stdio.h>
#include<string.h>
struct instaprofile
{
	char username[40];
	int followers;
	
	struct Bio
	{
		char description[50];
		int age;
	}bio;
};

main()
{
	struct instaprofile profile = {"daksh",2500,{"C programming learner", 20}};
	
	printf("Instagram Profile\n");
	printf("---------------\n");
	printf("Username: %s\n", profile.username);
	printf("Followers: %d\n", profile.followers);
	printf("Description: %s\n",profile.bio.description);
	printf("Age: %d\n",profile.bio.age);
}
