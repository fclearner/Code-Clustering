#include <stdio.h>
int main(){
	int n,a[100],b[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n-1;j++){
		b[j]=a[j]-a[j+1];
		if(b[j]<0) b[j]=0-b[j];
		else b[j]=b[j];
	}
	int l;
	for(int k=0;k<n-1;k++){
		l=k;
		for(int m=k;m<n-1;m++){
			if(b[m]<b[l]){
				l=m;
			}
		}
		int t=b[k];
		b[l]=b[k];
		b[k]=t;
	}
	printf("%d",b[n-2]);
	return 0;
}
