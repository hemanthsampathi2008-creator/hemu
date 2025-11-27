#include<stdio.h>
int main()
{
	int n,i;
	int student[n];
	printf("enter array size:");
	scanf("%d",&n);
	
	printf("enter marks of the student:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&student[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("marks of %d student is:%d\n",i,student);
		
	}
	return 0;
	
}
