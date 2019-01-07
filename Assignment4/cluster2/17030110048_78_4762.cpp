#include <stdio.h>
#include <string.h>
int XIAO(char name)
{
	if(name>='a'&&name<='z')return 1;
	else return 0;
}
int DA(char name)
{
	if(name>='A'&&name<='Z')return 1;
	else return 0;
}
int SHU(char name)
{
	if(name>='0'&&name<='9')return 1;
	else return 0;
}
int FEI(char name)
{
	if(SHU(name)==0&&DA(name)==0&&XIAO(name)==0)return 1;
	else return 0;
}
	int main()
	{
		char code[55];
		memset(code,'\0',sizeof(code));
		gets(code);
		int n=strlen(code);
		int sum=0;
		if(n==0) printf("0");
		if(n!=0)
		{
			sum=1;
			if(n>8)
			{
				sum+=1;
			}
			int i;
			int a[4]={0,0,0,0};
			for(i=0;i<n;i++)
			{
			if(DA(code[i])==1)a[0]++;
			else if(XIAO(code[i])==1)a[1]++;
			else if(SHU(code[i])==1)a[2]++;
			else if(FEI(code[i]==1))a[3]++;
			}
			int k=0;
			for(i=0;i<4;i++)
			{
					if(a[i]!=0) k++;
			}
			printf("%d",sum+k-1);
		}
	}
