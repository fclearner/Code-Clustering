#include<stdio.h>
#include<string.h>
int main()
{
    char a[60];
    scanf("%s",a);
    int grade=0,dif=0,i;
    int num=strlen(a);
    if(num==0)
    {
        printf("%d",grade);
        return 0;
    }
    else
    {
        grade=1;
        if(num>8)grade+=1;
        for(i=0;i<num;i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                dif+=1;
                break;
            }
        }
        for(i=0;i<num;i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                dif+=1;
                break;
            }
        }
        for(i=0;i<num;i++)
        {
            if(a[i]>='0'&&a[i]<='9')
            {
                dif+=1;
                break;
            }
        }
        for(i=0;i<num;i++)
        {
            if(a[i]<'0'||a[i]>'9'&&a[i]<'A'||a[i]>'Z'&&a[i]<'a'||a[i]>'z')
            {
                dif+=1;
                break;
            }
        }
        if(dif>1)grade+=(dif-1);
        printf("%d",grade);
        return 0;
    }
}
