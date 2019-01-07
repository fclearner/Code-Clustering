#include<stdio.h>
#include<string.h>
enum { num=100};
int main()
{
	int x,y,i=0,j=0,k=0,fen,D,zhi,sum=0,K=0,L=0,M=0,N=0,p=0;
	char a[num];
	while(i<num&&(D=getchar())!='\n'){
		a[i]=D; 
		i++;
	}
	zhi=i;
	for(i=0;i<zhi;i++){
	  if(a[i]>='0'&&a[i]<='9')
	   {
	   L=1;}
	else if(a[i]>='a'&&a[i]<='z')
	   {p=1;
	}
	else if(a[i]>='A'&&a[i]<='Z')
	  {
	   M=1;}
	 else
	   N=1;
}   
     if(zhi==0)
     printf("%d",zhi);
     else  if(zhi>8)
     printf("%d\n",p+L+M+N+1);
     else  if(zhi<=8&&zhi>0)
     printf("%d\n",p+L+M+N);
     

     
	
	return 0;
	
}
