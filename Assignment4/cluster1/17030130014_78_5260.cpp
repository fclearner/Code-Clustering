#include <stdio.h>
#include <string.h>
int main()
{
	int b,c,d,e,j=0,len,s=0,i;
	char a[50];
	gets (a);
	len=strlen(a);
	if(a=="")
	{s=0;
	}
    else
	{
		s=1;
		if(len>8)
		{s=s+1;
		}
		for(i=0;i<len;i++)
		{
		if(a[i]>='a'&&a[i]<='z')
		{b=1;
		j++;
		}
		else if(a[i]>='A'&&a[i]<='Z')	
			{c=2;
			j++;
			}
		else if(a[i]>='0'&&a[i]<='9')
			{d=3;
			j++;
			}
			else 
		    {e=4;
		    j++;
		    }
		}
	}	
	
	
	if(b==1)
	s=s+1;
	if(c==2)
	s=s+1;
	if(d==3)
	s=s+1;
	if(e==4)
	s=s+1;

	printf("%d",s-1);
	return 0;
}
