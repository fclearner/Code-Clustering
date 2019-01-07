#include<stdio.h>

int main()
{
	int n,a,pi[100]={0},b;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&pi[i]);	
	}
	if (pi[1]-pi[0]>0)a=pi[1]-pi[0];
	else a=-(pi[1]-pi[0]);
	for (int i=0;i+1<n;i++)
	{
		//printf("%d\n",pi[i]);
		if (pi[i+1]-pi[i]>0)b=pi[i+1]-pi[i];
	    else b=-(pi[i+1]-pi[i]);//printf("%d\n",i);//printf("%d\n",b);
		if (a<b)
		{
			a=b;//printf("%d\n",i);
		}
	}
	printf("%d",a);
	return 0;
}
