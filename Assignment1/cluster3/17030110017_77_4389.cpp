#include<stdio.h>
int d(int a,int b)
{	int m;
	if(a-b>0)m=a-b;
	else m=b-a;
	return m;
}
int main()
{
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	int max=d(a[1],a[0]);
	for(int i=2;i<n;i++)
		if(d(a[i],a[i-1])>max)max=d(a[i],a[i-1]);
	printf("%d",max);
	return 0;
}
