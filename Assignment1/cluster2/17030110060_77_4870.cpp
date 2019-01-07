#include<stdio.h>
int main(void)
{


	int n,i;
	int a[100],b[100];
    scanf("%d", &n);
    for(i=0;i<n;++i)
    {
    	int pi;
		scanf("%d", &pi);
		a[i]=pi;
    }
    int max=0;
    for(i=0;i<n-1;++i)
    {
	    int d;
	    d=a[i+1]-a[i];
	    if(d<0) d=-d;
	    if(d>max) max=d;
	    
	    
	    
	}
	printf("%d\n",max);



	return 0;
	
}
  
