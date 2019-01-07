#include <stdio.h>
#include <string.h>
int main(){
	char s[50];
	gets(s);
	int i;
	int score = 0;
	if(strlen(s)==0)
		printf("%d",score);
	else{
	
		score++;
	if(strlen(s)>8)
		score++;
	
	for(i=0;i<strlen(s);i++){
		if(s[i]>=65&&s[i]<=90){
			score++;
			break;
		}
	}
	for(i=0;i<strlen(s);i++){
		if(s[i]>=97&&s[i]<=122){
			score++;
			break;
		}
	}
	for(i=0;i<strlen(s);i++){
		if(s[i]>=48&&s[i]<=57){
			score++;
			break;
		}
	}
	for(i=0;i<strlen(s);i++){
		if(s[i]>=0&&s[i]<=47||s[i]>=58&&s[i]<=64||s[i]>=91&&s[i]<=96||s[i]>122){
			score++;
			break;
		}
	}
	score--;
	printf("%d",score);
	return 0;}
}


