#include<stdio.h>
int main(){
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a==0){
		printf("the number is equal to zero");
	}
	else if(a>0){
		printf("the number is postive");
	}
	else{
		printf("the number is negative");
	}
	return 0;		
}

