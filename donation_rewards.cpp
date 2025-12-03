#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<=3)
    printf("BRONZE");
    else if(a>3&&a<=6)
    printf("SILVER");
    else if(a>6)
    printf("GOLD");
    return 0;
}
