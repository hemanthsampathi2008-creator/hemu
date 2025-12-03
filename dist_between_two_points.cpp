#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,z,a,b;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    a=abs(x2-x1);
    b=abs(y2-y1);
    z=((a*a)+(b*b));
    float c=sqrt(z);
    printf("%.4f",c);
    return 0;
}


