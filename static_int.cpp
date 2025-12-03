#include<stdio.h>
int display()
{
	static int a=10;
	a++;
	return a;
	
}
int main()
{
	printf("value of a:\n",display());
	printf("value of a:\n",display());
	printf("value of a:\n",display());
	return 0;
}
