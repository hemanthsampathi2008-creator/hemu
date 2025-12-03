#include<stdio.h>
int main()
{
    int a,b,c;
    int d1,d2,d3;
    scanf("%d %d %d",&a,&b,&c);
    d1=a>50;
    d2=b>60;
    d3=c>100;
    if(d1&&d2&&d3)
    printf("10");
    else if(d1&&d2)
    printf("9");
    else if(d2&&d3)
    printf("8");
    else if(d1&&d3)
    printf("7");
    else if(d1||d2||d3)
    printf("6");
    else
    printf("5");
    return 0;
}
