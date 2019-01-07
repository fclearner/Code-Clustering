#include<stdio.h>
int main(){
	char m[52];
	int i,j=0;
	int k=0,u;
	gets(m);
	for(i=0;m[i]!='\0';i++){
		if(m[i]<='Z'&&m[i]>='A'){
		k=k+1;
		break;}
	}
		for(i=0;m[i]!='\0';i++){
		if(m[i]<='z'&&m[i]>='a'){
		
		k=k+1;
		break;}
	}
		for(i=0;m[i]!='\0';i++){
		if(m[i]<='9'&&m[i]>='0'){
		
		k=k+1;
		break;}
	}
		for(i=0;m[i]!='\0';i++){
		if(m[i]>'z'||(m[i]<'a'&&m[i]>'Z')||(m[i]<'A'&&m[i]>'9')||m[i]<'0'){
		k=k+1;break;}}

		
		
		
	k=k-1;
	for(i=0;m[i]!='\0';i++){
		j=j+1;
	}
	if(j==0)
	k=0;
	else if(j<=8)
	k=k+1;
	else if(j>=9)
	k=k+2;

	printf("%d",k);

}
