#include<stdio.h>
int main()
{
	int x;
	int y=0;
	char a[50]={0};
	int i=0;
	for(i=0;;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n') break;
	}
	if(a[0]=='\n') x=0;
	else
	{
		x=1;
		if(i>8) x+=1;
		for(int e=0;e<i;e++)
		{
			if((a[e]>'9'||a[e]<'0')&&(a[e]>'z'||a[e]<'a')&&(a[e]>'Z'||a[e]<'A'))
			{
				y=y+1;
				break;
			}
		}
		for(int d=0;d<i;d++)
		{
				if(a[d]>='A'&&a[d]<='Z')
			{
					y=y+1;
					break;
			}
		}
		for(int c=0;c<i;c++)
		{
			 if(a[c]>='a'&&a[c]<='z') 
			{
					y=y+1;
					break;
			}
	   }
	    for(int b=0;b<i;b++)
		{
				
			if(a[b]>='0'&&a[b]<='9') 
			{
					y=y+1;
					break;
			}
		}
		x=x+y-1;
	}
	printf("%d",x);
	return 0;
}
