#include <stdio.h>
#include <string.h>
int main(){
	int m,n,i,j,k,s,count[4];
	char E[50];
	gets(E);
	m=strlen(E);
	for(i=0;i<4;i++){
		count[i]=0;
    }
	if(m==0)
	s=0;
	else
	s=1;
	for(j=0;j<m;j++){
		if(E[j]>='0'&&E[j]<='9')
		count[0]++;
		else if(E[j]>='a'&&E[j]<='z')
		count[1]++;
		else if(E[j]>='A'&&E[j]<='Z')
		count[2]++;
		else
		count[3]++; 
	}
	for(n=0,k=0;k<4;k++){
		if(count[k]>0)
		n++;
	}
	if(m>8)
	s=s+1;
	if(n>=2&&n<3)
	s=s+1;
	else if(n>=3&&n<4)
	s=s+2;
	else if(n==4)
	s=s+3;
	printf("%d\n",s);
	return 0;	
}
