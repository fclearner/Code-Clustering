//ÃÜÂëÇ¿¶È
#include<stdio.h>

int A(char s);
int B(int a,int b,int c,int d,int e);
int main()
{
	char s[51];
	int dzm=0,xzm=0,sz=0,ot=0,i,num=0,all=0;
	for(i=0;i<51;i++)
	    s[i]=0;
	i=0;
	while((s[i]=getchar())!='\n')
	{
		switch(A(s[i++]))
		{
			case 0:sz=1;break;
			case 1:xzm=1;break;
			case 2:dzm=1;break;
			case 3:ot=1;break;
		} 
		num++;
	} 
	all=B(sz,xzm,dzm,ot,num);
	printf("%d",all);
	return 0;
} 


int A(char s)
{
	if(s>='0'&&s<='9')
	    return 0;
	else if(s>='a'&&s<='z')
	    return 1;
	else if(s>='A'&&s<='Z')
	    return 2;
	else
	    return 3;
}

int B(int a,int b,int c,int d,int e)
{
	int num=0,sum;
	sum=a+b+c+d;
	if(sum==2)
	    num++;
	else if(sum==3)
	    num+=2;
	else if(sum==4)
	    num+=3;
	if(e!=0)
	    num++;
	if(e>8)
	   num++;
	return num;
}
