/*密码强度计算规则如下： 
1. 基础分：空密码(密码长度为零)0分，非空密码1分 
2. 加分项1：密码长度超过8位，+1分 
3. 加分项2：密码包含两类不同字符+1分，包含三类不同字符+2分，包含四类不同字符+3分 
按照此规则计算的密码强度为0~5。请你设计一个程序计算给出的密码的强度。 

输入说明
输入为一个密码字符串，字符串长度不超过50个字符。
输出说明
输出一个整数表示该密码的强度。

输入样例
输入样例1 
abcd 
输入样例2 
ab123 

输出样例
样例1输出： 
1 
样例2输出 
2 
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int num=0,len=0,j=0,k=0,l=0,h=0,n=0;
	gets(a);
	len=strlen(a);
	
	if(len!=0)
	num+=1;
	else
	printf("0");
	
	if(len>8)
	num+=1;
	
	for(int i=0;i<len;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		j=1;
		else if(a[i]>='a'&&a[i]<='z')
		k=1;
		else if(a[i]>='A'&&a[i]<='Z')
		l=1;
		else
		h=1;
		
	}

		if(j+k+l+h==1)
		printf("%d\n",num);
		if(j+k+l+h==2)
		printf("%d\n",num+1);
		if(j+k+l+h==3)
		printf("%d\n",num+2);
		if(j+k+l+h==4)
		printf("%d\n",num+3);
	
	
	//printf("%d",j+k+l+h);
	return 0;
}
