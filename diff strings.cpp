#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10],choice,si;
	printf("\n 1.,stringlength");
	printf("\n 2.,stringcopy");
	printf("\n 3.,string compare");
	printf("\n 4.,string reverse");
	printf("\n 5.,string concentration");
	printf("\n 6.,string lowercase");
	printf("\n 7.,string uppercase");
	printf("\nenter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	
	case 1:
		{
		printf("enter the string");
		scanf("%[^\n]",s1);
		printf("length of given string is %d",strlen(s1));
	break;
		}
	case 2:
		{
		printf("enter a string");
	   scanf("%[^\n]",s1);
	    strcpy(s1,s2);
	    printf("copied string is%s",s2);
	    break;
		}
	case 3:
		{
		printf("enter the string s1:");
		scanf("%[^\n]",s1);
		printf("enter the string s2:");
		scanf("%[^\n]",s2);
		printf("comparing two strings:%d",strcmp(s1,s2));
		break;
		}
	case 4:
		{
		printf("enter the string s1:");
		scanf("%[^\n]",s1);
		printf("reverse of string is:%s",strrev);
		break;
		}
		case 5:
			{
		printf("enter the string s1:");
		scanf("%[^\n]",s1);
		printf("enter the string s2:");
		scanf("%[^\n]",s2);
		printf("concentration of two  two strings:%d",strcat(s1,s2));
		break;
		}
		case 6:
			{
		printf("enter the string s1:");
		scanf("%[^\n]",s1);
		printf("lowercase of givenstring is:%s",strlwr(s1));
			break;
			}
		case 7:
			{
		printf("enter the string s1:");
		scanf("%[^\n]",s1);
		printf("uppercase of givenstring is:%s,streupp");
		break;
			}
		}	
	return 0;
}
