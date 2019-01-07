#include<stdio.h>
#include<string.h>
int main()
{
	char asd[50];
	int n=strlen(gets(asd));
	if(n==0)
	{
		printf("0");
		return 0;
	}
	int x=1;
	if(n>8)
	{
		x=2;
	}
	int b[4]={0,0,0,0};
	int i;
	for(i=0;i<n;i=i+1)
	{
		if(asd[i]>=65&&asd[i]<=90)
		{
			b[0]=b[0]+1;
		}
		else if(asd[i]>=97&&asd[i]<=122)
		{
			b[1]=b[1]+1;
		}
		else if(asd[i]>=48&&asd[i]<=57)
		{
			b[2]=b[2]+1;
		}
		else
		{
			b[3]=b[3]+1;
		}
	}
	int p=0;
	for(i=0;i<4;i=i+1)
	{
		if(b[i]>0)
		{
			p=p+1;
		}
	}
	if(p==2)
	{
		x=x+1;
	}
	if(p==3)
	{
		x=x+2;
	}
	if(p==4)
	{
		x=x+3;
	}
	printf("%d",x);
	return 0;
}
