#include"stdio.h"
#include"string.h"
#define M 50
int main()
{
	char a[M];
	int point=0,q,w,e,r,i;
	gets(a);
	if(strlen(a)==0)
	{
		point=0;
	}
	else 
	{
		point=1;
	}
	if(strlen(a)>8)
	{
		point +=1;
	}
    for(i=0;i<strlen(a);i++)
    {
    	if(a[i]>='0'&&a[i]<='9')
    	{
    		q=1;
    	}
    	else if(a[i]<='z'&&a[i]>='a')
    	{
    		w=2;
    	}
    	else if(a[i]>='A'&&a[i]<='Z')
    	{
    		e=3;
    	}
    	else
    	{
    		r=4;
    	}
    }
    if(q==1&&w==2&&e==3&&r==4)
    {
    	point +=3;
    }
    else if(q==1&&w==2&&e==3)
    {
    	point +=2;
    }
    else if(q==1&&w==2)
    {
    	point +=1;
    }
    printf("%d\n",point);
	return 0;
}
