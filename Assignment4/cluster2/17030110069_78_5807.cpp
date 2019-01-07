#include<stdio.h>
#include<string.h>

/*
1. 基础分：空密码(密码长度为零)0分，
                       非空密码1分 
2. 加分项1：密码长度超过8位，+1分 
3. 加分项2：
              密码包含两类不同字符+1分，
             包含三类不同字符+2分，
		    包含四类不同字符+3分 

按照此规则计算的密码强度为0~5。
请你设计一个程序计算给出的密码的强度。 

*/

int qd(char *s){
	int i,j;
	int a=0,b=0,c=0,d=0;
	int max=0;
	int len=strlen(s);
	
	
	if(len!=0){
	  max=1;
	if(len>8){
	   max++;
	  } 
 	          } 
	
	for(i=0;s[i]!='\0';i++){
		
		if(s[i]>='0' && s[i]<='9') 
		{   a=1; 
		}
	    if(s[i]>='a' && s[i]<='z')
		{   b=1; 
		}                   
		if(s[i]>='A' && s[i]<='Z')
		{   c=1; 
		}
		if(s[i]<'0' || (s[i]>'9' && s[i]<'A') || (s[i]>'Z'&& s[i]<'a') || s[i]>'z')
		{   d=1; 
		}
		                   }
		                   
		j=a+b+c+d;
	
	if(j==4)	{max=max+3;}
	if(j==3)    {max=max+2;}
	if(j==2)    {max=max+1;} 
	
		
	      return max;                	
}

int main(){
	
	int a;
	char s[100];
	
	gets(s);
	
	printf("%d\n",qd(s));
	
	
	
}
