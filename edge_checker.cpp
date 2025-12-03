#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b)
    printf("No");
    else if(a==b+1||b==a+1)
    printf("Yes");
    else if(a==1&&b==10||a==10&&b==1)
    printf("Yes");
    else
    printf("No");
    return 0;
}
