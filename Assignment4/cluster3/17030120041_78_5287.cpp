#include<stdio.h>
#include<string.h>
int main(void){
	char str[1024],*p;
	int score=0,num=0,ch1=0,ch2=0,fuhao=0;
	
	gets(str);
	p=str;
	if(strlen(str)>50)	return 0;
	if(*p!=NULL){
		score++;
		if(strlen(str)>8)	score++;
		while(*p){
			if(*p>='0'&&*p<='9')	num++;
			if(*p>='a'&&*p<='z')	ch1++;
			if(*p>='A'&&*p<='Z')	ch2++;
			if((*p>='!'&&*p<='/')||(*p>=':'&&*p<='@')||(*p>='['&&*p<='`'))	fuhao++;
			p++;
		}
		if((num!=0&&ch1!=0)||(num!=0&&ch2!=0)||(num!=0&&fuhao!=0)||(ch1!=0&&ch2!=0)||(ch1!=0&&fuhao!=0)||(ch2!=0&&fuhao!=0)){
			score++;
			if((num!=0&&ch1!=0&&ch2!=0)||(num!=0&&ch1!=0&&fuhao!=0)||(num!=0&&ch2!=0&&fuhao!=0)||(ch1!=0&&ch2!=0&&fuhao!=0)){
				score++;
				if(num!=0&&ch1!=0&&ch2!=0&&fuhao!=0)	score++;
			}	
			
		}	
		
	}	
	
	
	printf("%d\n",score);
	return 0;
}
