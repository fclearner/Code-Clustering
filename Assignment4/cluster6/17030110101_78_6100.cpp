#include<stdio.h>
#include<string.h>
int main(){
	int wei,grade=0,i,grade1=0;
	char mima[55];
	gets(mima);
    wei=strlen(mima);
    if(wei==0)
    grade=0;
    else
    grade++;
    if(wei>8)
    grade++;
    for(i=0;i<wei;i++)//
    {
    if(mima[i]>='0'&&mima[i]<='9')
    {
    	grade1++;
    	break;
    }
    }
     for(i=0;i<wei;i++)//
    {
    if(mima[i]>='A'&&mima[i]<='Z')
    {
    	grade1++;
    	break;
    }
    }
       for(i=0;i<wei;i++)//
    {
    if(mima[i]>='a'&&mima[i]<='z')
    {
    	grade1++;
    	break;
    }
    }
        for(i=0;i<wei;i++)//
    {
    if((mima[i]>=0&&mima[i]<'0')||(mima[i]>'9'&&mima[i]<'A')||(mima[i]>'Z'&&mima[i]<'a')||(mima[i]>'z'))
    {
    	grade1++;
    	break;
    }
    }
    if(grade1==2)
    grade++;
    if(grade1==3)
    grade+=2;
    if(grade1==4)
    grade+=3;
    printf("%d\n",grade);
	return 0;
}

