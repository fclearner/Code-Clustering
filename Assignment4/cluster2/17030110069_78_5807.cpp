#include<stdio.h>
#include<string.h>

/*
1. �����֣�������(���볤��Ϊ��)0�֣�
                       �ǿ�����1�� 
2. �ӷ���1�����볤�ȳ���8λ��+1�� 
3. �ӷ���2��
              ����������಻ͬ�ַ�+1�֣�
             �������಻ͬ�ַ�+2�֣�
		    �������಻ͬ�ַ�+3�� 

���մ˹�����������ǿ��Ϊ0~5��
�������һ�������������������ǿ�ȡ� 

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
