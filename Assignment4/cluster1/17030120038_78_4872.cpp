#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	char a[55];
	int fen=0;
	char ch;
	int count=0;
	int daxie=0,xiaoxie=0,shuzi=0,fei=0;
	while((ch=getchar())!='\n'){
		count++;
		if(isdigit(ch))
		shuzi=1;
		else if(ch>='A'&&ch<='Z')
		daxie=1;
		else if(ch>='a'&&ch<='z')
		xiaoxie=1;
		else 
		fei=1;
	}
	int len=count>8?1:0;
	fen=shuzi+daxie+xiaoxie+fei+len;
	if(shuzi==0&&daxie==0&&xiaoxie==0&&fei==0)
	printf("0");
	else {
		printf("%d",fen);
	}
	return 0;
}
