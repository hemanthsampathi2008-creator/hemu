#include<math.h>
int main()
{
	int p=100000;
	int t=2;
	int r=2;
	float CI=p*pow((1+(r/100)),t);
	printf("compound intrest is:%f",CI);
	return 0;
}
