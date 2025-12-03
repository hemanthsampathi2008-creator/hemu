#include<stdio.h>
int main()
{
	int i,n,j,arr[10];
	printf("enter n value");
	scanf("%d",&n);
	printf("enter into the array elements:");
	for(i=0;i<n;i++)
	{
	
	printf("elements is %d",i);
	scanf("%d",&arr[i]);
}
printf("duplicate elements in the array are:");
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(arr[i]==arr[j])
		
		{
			printf("%d",arr[i]);
			
		}
	}
}
	}
