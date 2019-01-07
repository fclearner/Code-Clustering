#include<stdio.h>
#include<string.h>
int main()
{
	int i,l,mark=0;
	char a[50];
	gets(a);
	l=strlen(a)-1;
	if(l==0)
	{
		printf("0");
	}
	else if(l!=0)
	{
	if(l>=8)
	{
		mark+=1;
	}
	for(i=0;i<l;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			mark+=1;break;
		}
	}
	for(i=0;i<l;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			mark+=1;break;
		}
	}
	for(i=0;i<l;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			mark+=1;break;
		}
	}
	for(i=0;i<l;i++)
	{
		if(a[i]<'0'||a[i]>'z')
		{
			mark+=1;break;
		}
	}
		printf("%d",mark);
	}
	return 0;
}
