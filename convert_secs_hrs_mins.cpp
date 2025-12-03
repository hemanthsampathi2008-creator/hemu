#include<stdio.h>
int main()
{
    int SEC,H,M,S;
    scanf("%d",&SEC);
    H=(SEC/3600);
    M=(SEC-(3600*H))/60;
    S=(SEC-(3600*H)-(M*60));
    printf("H:M:S-%d:%d:%d",H,M,S);
    return 0;

}
