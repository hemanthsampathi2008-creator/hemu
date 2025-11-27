#include<stdio.h>
int main()
{
	int a[3][3],i,j,t[j][i];
	
	printf("Enter array elements :");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		t[i][j]=a[j][i];
		}
	}
	 
	 printf("Transpose of matrix is :\n");
	 
	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 	printf("%d ",t[i][j]);
	} 
	printf("\n");
	 }
}

