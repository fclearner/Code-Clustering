#include<stdio.h>
int main(){
	int n,Pi,a,c,z=0;
	scanf("%d",&n);
	scanf("%d",&a);
	for(int i=2;i<=n;i++){
		scanf("%d",&Pi);
		if(a>=Pi)
		c=a-Pi;
		else
		c=Pi-a;
		z=z>c?z:c;
		a=Pi;
	}
	printf("%d",z);
	return 0;
}
