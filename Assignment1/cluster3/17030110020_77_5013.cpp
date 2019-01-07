#include<stdio.h>
int dx(int a,int b){
	int c;
	if(a>=b) c=a-b;
	else c=b-a;
	return c;
}
int main(){
	int a,c=0;
	scanf("%d",&a);
	int b[a];
    for(int i=0;i!=a;i++){
    	scanf("%d",&b[i]);
    }
	for(int i=1;i!=a-1;i++){
		if(c>=dx(b[i],b[i+1])) c=c;
		else c=dx(b[i],b[i+1]);
	}
	printf("%d",c);
	return 0;
}
