#include<stdio.h>
int main(){
	int a[50]={0};
	int n,i,max=0,c,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(k=0;k<n-1;k++){
		c=a[k+1]-a[k];
		if(c<0) c=0-c;
		if(c>max) max=c;
	}
	printf("%d",max);
 return 0;	
	
}
