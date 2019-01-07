#include<stdio.h>
#include<string.h>
int main()
{
	char key[50];
	gets(key);
	int len,num=0,i,k=0,panduan;
	len=strlen(key);
	if(len==0)
	num+=0;
	else num+=1;
	if(len>8)
	num+=1;
	for(i=0;i<len;i++)
	{
		if(key[i]>=48&&key[i]<=57)
		{
			k+=1;
			break;
		}
	}
	for(i=0;i<len;i++)
	{
		if(key[i]>=58&&key[i]<=64||key[i]>=91&&key[i]<=96)
		{
			k+=1;
			break;
		}
	}
    for(i=0;i<len;i++)
	{
		if(key[i]>='a'&&key[i]<='z')
		{
			k+=1;
			break;
		}
	}
	for(i=0;i<len;i++)
	{
		if(key[i]>='A'&&key[i]<='Z')
		{
			k+=1;
			break;
		}
	}
	if(k==2)
	num+=1;
	else if(k==3)
	num+=2;
	else if(k==4)
	num+=3;
	printf("%d",num);
	return 0;
}
