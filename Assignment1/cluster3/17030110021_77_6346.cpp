#include<stdio.h>
int cha(int x,int y)
{
	if(x>y)return x-y;
	else return y-x;
}

int main()
{
	int n,m;
	int a[100]={0},b[100]={0};
	scanf("%d",&n);
    int count=0;
	for(int i=0;i<n;i++)
	{
		
		int pi;
		scanf("%d",&pi);
		a[count++]=pi;	
	}	
	count=0;
	for(int i=0;i<n-1;i++)
	{
	
		b[count++]=cha(a[count+1],a[count]);
		m=count;
	}
	int max=b[0];
	for(int i=1;i<m;i++)
	{
		if(b[i]>max)max=b[i];
	}
	printf("%d",max);
	return 0;
}
