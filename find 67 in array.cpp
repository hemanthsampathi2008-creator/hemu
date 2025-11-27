#include<stdio.h>
int main()
{
	int arr[]={26,12,64,25,67,46};
	int n=6;
	int key=67;
	int i,found=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("element %d found at position %d",key,i+1);
			found=1;
			break;
		}
	}
	if(found==0)
	printf("element %d not found int array\n",key);
	return 0;
	
}
