#include<stdio.h>
int main()
{
    int a,printed=0;
    scanf("%d",&a);
    if(a%3==0){
    printf("Pling");
    printed=1;
    }
    if(a%5==0){
    printf("Plang");
    printed=1;
    }
    if(a%7==0){
    printf("Plong");
    printed=1;
    }
    if(printed==0)
    {
    printf("%d",a);
    }
    return 0;
}
