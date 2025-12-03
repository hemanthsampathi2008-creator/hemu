#include<stdio.h>
int main()
{
	int rating;
	printf("give rating");
	scanf("%d",&rating);
	if(rating==5)
	{
		printf("excellent");
	}
	else if(rating==4)
	{
		printf("good");
	}
	else if(rating==3)
	{
		printf("average");
	}
	else if(rating==2)
	{
		printf("bad");
	}
	else if(rating==1)
	{
		printf("worst");
	}
	else
	{
		printf("invalid rating");
	}
	return 0;
}
