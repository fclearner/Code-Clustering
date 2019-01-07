#include<stdio.h>
int main()
{
	int m,i,q,c,d;
	int k=0;
	int a[100]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(q=1;q<m;q++)
	{
		c=a[q]-a[q-1];
		if(c<0)
		{
			d=-c;
			c=d;
		}
		if(c>k)
		{
			k=c;
		}
	}
	printf("%d",k);
	return 0;
}
