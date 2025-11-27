#include<stdio.h>
int main()
{
	int i,n,j,temp,arr[10],min;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min]){
				min=j;
				
			}
				
		}
		if(min!=0)
		{
			temp=arr[i];
			arr[i]=temp;
		}
	}
	printf("sorted array is:\n");
}

	
