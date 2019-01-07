#include<stdio.h>
#include<math.h>
int main(){
	int change=0,change1,n,i,pm1,pm2;
	scanf("%d%d",&n,&pm1);		
	for(i=n-1;i;i--){
		scanf("%d",&pm2);
		change1=pm1-pm2>0?pm1-pm2:pm2-pm1;
		if(change<change1)change=change1;
		pm1=pm2;
	}
	printf("%d\n",change);
	return 0;
}
