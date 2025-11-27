#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3],n;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter first array elements");
	for(i=0;i<n;i++);
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("enter second array elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		}
	}
		printf("result valueis%d",c[i][j]);
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			
			printf("%d\n",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
