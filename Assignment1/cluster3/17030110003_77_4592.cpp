#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[n-1]-a[n-2];
	if(max<0) max=-max;
	for(int i=n-2;i>0;i--)
	{
		int now=a[i]-a[i-1];
		if(now<0) {now=-now;}
		if(now>max) {max=now;}
	}
	printf("%d",max);
	return 0;
}
