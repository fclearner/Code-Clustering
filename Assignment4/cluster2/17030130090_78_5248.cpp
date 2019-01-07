#include<stdio.h>
#include<string.h>
int fun(char a[],int b)
{
	int n=0;
	int i;
	int c1=0,c2=0,c3=0,c4=0;
	for(i=0;i<b;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		c1=1;
		else if(a[i]>='a'&&a[i]<='z')
		c2=1;
		else if(a[i]>='0'&&a[i]<='9')
		c3=1;
		else {
		c4=1;
		}
	
	}
	
	return c1+c2+c3+c4-1;
}
int main()
{
	char codes[50];int n;
	gets(codes);
	int stong=0;
	if(strlen(codes)>0){
	stong++;
	if(strlen(codes)>8)
	stong++;	
	n=fun(codes,strlen(codes));
	stong=stong+n;

}
printf("%d",stong);
	
	return 0;
}
