#include<stdio.h>
#include<string.h>
int main(){
	char m[50]={};
	int s=1,i,len,d=0,x=0,mumber=0,f=0;
	gets(m);
	len=strlen(m);
	if(m[0]=='\0') printf("0");
	else{
		if(m[8]!='\0'){
			s=2;
		}
		for(i=0;i<len;i++){
			if((m[i]>='A'&&m[i]<='Z')||(m[i]>='a'&&m[i]<='z')||(m[i]>='0'&&m[i]<='9')){
				if(m[i]>='A'&&m[i]<='Z') d++;
			    if(m[i]>='a'&&m[i]<='z') x++;
			    if(m[i]>='0'&&m[i]<='9') mumber++;
			}
            else f++;
		}
		if(d!=0) d=1;
		if(x!=0) x=1;
		if(m!=0) mumber=1;
		if(f!=0) f=1;
		printf("%d",s+d+x+mumber+f-1);
	}
	return 0;
}
