#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two nubers");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapping of two numbers :a=%d,b=%d",a,b);
    return 0;
}
