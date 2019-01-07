#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,t,c,b;
	int a=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
        scanf("%d",&t);
		if(i==0)
		c=t;
		else
		{
			b=(t-c)>(c-t)?(t-c):(c-t);
			a=a>b?a:b;
			c=t;
	    }
	}
	printf("%d",a);
	
	return 0;
}
