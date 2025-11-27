#include<stdio.h>
int main()
{
	int i,n,arr[10],max;
	printf("enter n value");
	scanf("%d",&n);
	printf("\nenter array values");

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	 max =arr[0];
	for(i=0;i<n;i++);
	{
		if(arr[i]>max)
		{
			max=arr[i];
			
	}
	printf("\nmaximum  element is:%d",max);
	return 0;
	}
}
