#include<stdio.h>

int main(){
	int n,max =0,m;
	int a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n-1;j++){
		m=a[j+1]-a[j];
		if(m<0) m=-m;
		if(m>max) max=m;
	}
	printf("%d",max);
	return 0;
}

