#include <stdio.h>

int main(void)
{
	int n,b,d,a[1000],sum=0,cot=0;
	 scanf ("%d",&n);
	 for (int i=0;i<n;i++ )
	 {
	 	scanf ("%d",&b);
	 	a[i]=b;
	 	if (i>0)
	 	{
	 		sum=a[i]-a[i-1];
	 		if (sum<0)
	 		sum=-sum;
	 	}
	 		if(cot<sum)
	 		cot=sum;
	 }
	 printf("%d",cot);
	 return 0;
}
