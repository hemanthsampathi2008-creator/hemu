#include<stdio.h>
int main()
{
	char s[50],i;
	int v,c,d,p; 
	v=0,c=0,d=0,p=0;
	printf("enter a sentence:\n");
	fgets(s,sizeof(s),stdin);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			v++;
		}
		else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
		{
			c++;
		}
		else if(s[i]>='0'&&s[i]<='9')
		{
			d++;
		}
		else if(s[i]==' ')
		{
			p++;
	}
	}
	printf("vowels: %d\n consonants: %d\n digits: %d\n spaces: %d",v,c,d,p);
	return 0;
}
