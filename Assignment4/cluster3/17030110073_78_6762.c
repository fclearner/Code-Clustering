#include<stdio.h>
#include<string.h>
int main(){
	char A[50];
	int a,b,c,i=0,d,num,e;
	a=b=c=d=1;
	num =0;
	int score=0;
	gets(A);
	e=strlen(A);
	

	while(A[i]!='\0'){
	if(A[i]>='0'&&A[i]<='9'&&d){
	
	num=num+1;
	d=d-1;}
	if(A[i]>='a'&&A[i]<='z'&&a){
		num=num+1;
		a=a-1;
	}
	
	if(A[i]>='A'&&A[i]<='Z'&&b){
		num=num+1;
		b=b-1;
	}
	if((A[i]<='A'||A[i]>='Z'||A[i]<='a'||A[i]>='z'||A[i]>='9')&&c){
		num=num+1;
		c=c-1;
	}
	i=i+1;
}
   if(num==1)
     num=0;
	if(num==2)
	num=1;
	if(num==3)
	num=2;
	if(num==4)
	num=3;	
 
    
    if(strlen(A)>8){
    	num=num+2;
    
    }
    
     if (strlen(A)==0){
     	num=0;
     }
    printf("%d",num);
return 0;
}
