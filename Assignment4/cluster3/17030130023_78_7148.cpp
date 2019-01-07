#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int i,a,p=0,w=0,k=0,u=0,q;
	char str[50];
	gets(str);
	int l=strlen(str);
	if(strlen(str)==0) a=0;
	if (0<strlen(str)&&strlen(str)<=8)
	{
		for(i=0;i<l;i++)
		{
			p=p+isdigit(str[i]);
			w=w+isupper(str[i]);
			k=k+islower(str[i]);
			if(isdigit(str[i])+isupper(str[i])+islower(str[i])==0) u++;
		}
		if(p!=0&&w==0&&k==0&&u==0) a=1;
		else if(p!=0&&w!=0&&k!=0&&u!=0) a=4;
		else if((p!=0&&w!=0&&k!=0&&u==0)||(p!=0&&w!=0&&k==0&&u!=0)||(p!=0&&w==0&&k!=0&&u!=0)||(p==0&&w!=0&&k!=0&&u!=0)) a=3;
		else if((p==0&&w==0&&k!=0&&u!=0)||(p==0&&w!=0&&k==0&&u!=0)||(p==0&&w!=0&&k!=0&&u==0)||(p!=0&&w==0&&k==0&&u!=0)||(p!=0&&w==0&&k!=0&&u==0)||(p!=0&&w!=0&&k==0&&u==0)) a=2;
		else if((p==0&&w==0&&k!=0&&u==0)||(p==0&&w==0&&k==0&&u!=0)||(p==0&&w!=0&&k==0&&u==0)) a=1;
	}
	if(strlen(str)>8)
	{
		for(i=0;i<l;i++)
		{
			p=p+isdigit(str[i]);
			w=w+isupper(str[i]);
			k=k+islower(str[i]);
			if(isdigit(str[i])+isupper(str[i])+islower(str[i])==0) u++;
		}	
if((p==0&&w==0&&k!=0&&u==0)||(p==0&&w==0&&k==0&&u!=0)||(p==0&&w!=0&&k==0&&u==0)||(p!=0&&w==0&&k==0&&u==0)) a=2;
		else if(p!=0&&w!=0&&k!=0&&u!=0) a=5;
		else if((p!=0&&w!=0&&k!=0&&u==0)||(p!=0&&w!=0&&k==0&&u!=0)||(p!=0&&w==0&&k!=0&&u!=0)||(p==0&&w!=0&&k!=0&&u!=0)) a=4;
		else if((p==0&&w==0&&k!=0&&u!=0)||(p==0&&w!=0&&k==0&&u!=0)||(p==0&&w!=0&&k!=0&&u==0)||(p!=0&&w==0&&k==0&&u!=0)||(p!=0&&w==0&&k!=0&&u==0)||(p!=0&&w!=0&&k==0&&u==0)) a=3;
		
	}
	printf("%d",a);
	return 0;
}
