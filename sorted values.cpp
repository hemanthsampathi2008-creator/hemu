#include<stdio.h>
int main()
{
	int a[6]={23,95,76,32,14,44};
	int n=6;
	int i,j,temp;
	for (i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++);
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
