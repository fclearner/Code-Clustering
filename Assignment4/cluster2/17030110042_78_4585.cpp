#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char password[50];
	int str=0;
	int sum=0;
	int all;
	int flag1=0;int flag2=0;int flag3=0;int flag4=0;
	gets(password);
	if (strlen(password)==0)
	{
		printf("0");
		return 0;
	}
	else if(strlen(password)>8)str=2;
	else str=1;
	for (int i=0;i<strlen(password);i++)
	{	if ((password[i]>='a')&&(password[i]<='z'))flag1=1;
		else if ((password[i]>='A')&&(password[i]<='Z'))flag2=1;
		else if ((password[i]>='0')&&(password[i]<='9'))flag3=1;
		else flag4=1;
	}
	sum=flag1+flag2+flag3+flag4;
	if(sum==4)all=3;
	else if(sum==3)all=2;
	else if(sum==2)all=1;
	else all=0;
	printf("%d",str+all);
	return 0;}
	
