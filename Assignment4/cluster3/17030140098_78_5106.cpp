#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char a[51];
	int n,b,c,d,k,l,m,p,o,g,h;
	gets(a);
	p=l=m=k=0;
	b=0;
	c=0;
	if(a[0]!='\0')
	{
		b++;
	}
	d=strlen(a);
	if(d>8)
	{
		b++;
	}
	for(n=0;n<d;n++)
	{
		if(isupper(a[n]))
		{
			k=1;
			c++;
		}
	}
	for(n=0;n<d;n++)
	{
		if(islower(a[n]))
		{
			m=1;
			c++;
		}
	}
	for(n=0;n<d;n++)
	{
		if(isdigit(a[n]))
		{
			l=1;
			c++;
		}
	}
	if(c<d)
	{
		o=1;
	}
	g=h=c=0;
	if(k==1&&l==1)p++;
	else if(k==1&&o==1)p++;
	else if(k==1&&m==1)p++;
	else if(l==1&&m==1)p++;
	else if(l==1&&o==1)p++;
	else if(m==1&&o==1)p++;
	if(k==1&&l==1&&m==1)p++;
	else if(k==1&&l==1&&o==1)p++;
	else if(k==1&&m==1&&o==1)p++;
	else if(l==1&&o==1&&m==1)p++;
	if(k==1&&l==1&&m==1&&o==1)p++;
	b=b+p;
	printf("%d",b);
}
