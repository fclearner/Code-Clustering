#include<stdio.h>
int main(){
	int lens=0,daxie=0,xiaoxie=0,shuzi=0,fuhao=0,fenshu=0;
	char str[100]={0};
    for(int i=0; ;i++)
    {                    
        str[i]=getchar();
        if(str[i]=='\n')
        {
            str[i]='\0';
            break;
        }
        lens++;
    }
    for(int j=0;str[j]!=0;j++)
    {
        if(str[j]>='0'&&str[j]<='9')
        {
            shuzi=1;
        }
        else if(str[j]>='a'&&str[j]<='z')
        {
            xiaoxie=1;
        }
        else if(str[j]>='A'&&str[j]<='Z')
        {
            daxie=1;
        }
        else fuhao=1;
   }
	if(lens>8) lens=1;
	else lens=0;
	fenshu=daxie+xiaoxie+fuhao+shuzi+lens;
    printf("%d",fenshu);
    }
