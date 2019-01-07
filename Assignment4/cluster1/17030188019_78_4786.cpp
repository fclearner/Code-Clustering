#include<stdio.h>
#include<string.h>
int main()
{
	char code[100];
	gets(code);
	int len,grade=0;
	len=strlen(code);
	if(len==0)   grade=0;                     //´óÐ´×ÖÄ¸    Ð¡Ð´×ÖÄ¸    Êý×Ö     ·Ç×ÖÄ¸Êý×Ö 
	else grade++;
	if(len>8) grade++;
	int i;
	int level1=0,level2=0,level3=0,level4=0;
	int temp=0;;
	for(i=0;i<len;i++)
	{
		if(code[i]<='9'&&code[i]>='0')
		{
		level1=1; temp=1;} 
	    if(code[i]<='z'&&code[i]>='a')
		{
		level2=1;  temp=1;}
		if(code[i]<='Z'&&code[i]>='A')
		{
		level3=1; temp=1;}
		if(temp==0) level4=1;
		
		
	
	temp=0;
	}
	int sum;   sum=level1+level2+level3+level4;
	if(sum==2) grade=grade+1;
	if(sum==3) grade=grade+2;
	if(sum==4) grade=grade+3;
	
	
	
	
	
	
	
	
	printf("%d",grade);
	
	
	
	
	
	
	
	
	
}
