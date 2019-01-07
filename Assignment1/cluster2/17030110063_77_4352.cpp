#include<stdio.h>
int main()
{
	int n,p[1000],t,i,j,c=1,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=1;i<n;i++)
	{
		j=p[i]-p[i-1];
		if(j<0)
		j=-j;
		max=max>j?max:j;
	}
	printf("%d",max);
	return 0;
}
