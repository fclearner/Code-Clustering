#include<stdio.h>
#include<string.h> 
int main(){
	char line[50];
	gets(line);
	int grade,n;
	n=strlen(line);
	if(n==0)grade=0; 
	else grade=1;
	if(n>8)grade=grade+1;
	int i;
	int type=0; 
	for(i=0;i<n;i++){
	    if(line[i]>=48&&line[i]<=57){
		   type=type+1;
		   break;
		}    
	}
	for(i=0;i<n;i++){
	    if(line[i]>=65&&line[i]<=90){
		   type=type+1;
		   break; 
		}  
	}
	for(i=0;i<n;i++){
	    if(line[i]>=97&&line[i]<=122){
		   type=type+1;
		   break; 
		}   
	}
	 for(i=0;i<n;i++){
	    if(line[i]<=47||line[i]>=58&&line[i]<=64||line[i]>=91&&line[i]<=96||line[i]>=123){
		   type=type+1;
		   break;
		}    
	}
	if(type==2)grade=grade+1;
	else if(type==3)grade=grade+2; 
	else if(type==4)grade=grade+3;
	printf("%d",grade);
	return 0;
}	 
	 
	
