#include<stdio.h>
int q(int a[],int n)
{
	int i,t=a[1]-a[0],s;
	if(t<0) t=-t;
	for(i=1;i<n-1;i++)
	{
		s=a[i+1]-a[i];
		if(s<0) s=-s;
		if(s>t) t=s;
	}
	return t;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",q(a,n));
	return 0;
}
