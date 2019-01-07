#include <stdio.h>

int main ()
{
	char a[50];
	int sum=0;
	int m=0,i,k=0,j=0,p=0,q=0,r=0;
	for (i=0;i<50&&(a[i]=getchar ())!='\n';i++)
		k=i+1;
	if (k==0)
	m=0;
	else
	m++;
	if (k>8)
	m++;
	for (i=0;i<k;i++)
	{
		if (a[i]>=65&&a[i]<=90)
		j=1;
		if (a[i]>=97&&a[i]<=122)
		p=1;
		if (a[i]>=48&&a[i]<=57)
		q=1; 
		if (a[i]>=33&&a[i]<=47||a[i]>=58&&a[i]<=64||a[i]>=91&&a[i]<=96||a[i]>=123&&a[i]<=126) 
		r=1;            
	}
	sum=p+q+r+j;
	if (sum==4)
	m+=3;
	if (sum==3)
	m+=2;
	if (sum==2)
	m+=1;
	printf ("%d",m);
	return 0;
}
