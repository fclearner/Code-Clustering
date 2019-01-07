#include<stdio.h>
#include<math.h>

enum{num=100};
int main(){
	int n,i,max=0;
	int a[num];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		if((fabs(a[i+1]-a[i]))>max){
			max=fabs(a[i+1]-a[i]);
		}
	}
	printf("%d",max);
	return 0;
}
