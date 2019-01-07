#include<stdio.h>
int main()
{
	int m,f,b=0,c=0,d=0,e=0,j2,i=0,j1,f1=0;
	char a[50]={0};
	scanf("%s",&a);
	
	 for(;a[i]!=0;i++)
	 {
	  if(a[i]>=48&&a[i]<=56)b=1;	
	  else if(a[i]>=65&&a[i]<=90)c=1;
	  else if(a[i]>=97&&a[i]<=122)d=1;
	  else e=1;
	 }
	 
	if(i==0)
	f=0;
	
	else
	{
	if(i>8)
	f1=1;
	j1=1;
	j2=b+c+d+e-1;
	f=f1+j1+j2;
	}
	printf("%d",f);
	return 0;
}
//for(int i=0;i<m;i++)
//	scanf("%d",&a[i]);
//
