#include<stdio.h>
int main()
{
	char a[50];
	char q;
	int n,m,i,j,r;
	r=0;
	int charge;
	for(i=0;1;i++)
	{
		scanf("%c",&q);
		if(q=='\n')
		{
			break;
		}
		a[i]=q;
		
	}
	if(i>=0)
	{
		charge=1;
		if(i>8)
		{
			charge=charge+1;
		}
	}
	else
	{
		printf("0");
		return 0;
	}
	for(j=0;j<i;j++)
	{
		if(a[j]>='A'&&a[j]<='Z')
		{
			charge=charge+1;
			r=r+1;
			break;
		}
	}
	for(j=0;j<i;j++)
	{
		if(a[j]>='a'&&a[j]<='z')
		{
			charge+=1;
			r=r+1;
			break;
		}
	}
	for(j=0;j<i;j++)
	{
		if(a[j]>='0'&&a[j]<='9')
		{
			charge+=1;
			r=r+1;
			break;
		}
	}
	for(j=0;j<i;j++)
	{
		if(!((a[j]>='A'&&a[j]<='Z')||(a[j]>='a'&&a[j]<='z')||(a[j]>='0'&&a[j]<='9')))
		{
			charge+=1;
			r=r+1;
			break;
		}
	}
	
		printf("%d",charge-1);
/*	else
	{
			printf("%d",charge);
	}*/

	return 0;
	
}
