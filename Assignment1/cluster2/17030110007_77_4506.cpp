#include <stdio.h>
int main()
{
	int m,n,a,b;
	int max,big;
	scanf("%d",&m);
	scanf("%d",&a);
	scanf("%d",&b);
	max=b-a;
	if(max<0){
		max=-max;
	}
	for(int i=0;i<m-2;i++)
	{
		scanf("%d",&n);
		big=n-b;
		if(big<0){
			big=-big;
		}
		if(big>max)
		{
			max=big;
		}
		b=n;
	}
	printf("%d",max);
	return 0;
}
