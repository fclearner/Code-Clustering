#include<stdio.h>
#include<string.h>
int main()
{
	int score = 0;
	char line[50]={0};
	gets(line);
	
	int len = strlen(line);
	if(len>0&&len<=8)
	score = 1;
	if(len>8)
	score = 2;
	
	
	int j;
	int a = 0,b = 0,c = 0,d = 0;
	for(j=0;j<len;j++)
	{
		if(line[j]>='0'&&line[j]<='9')
		a ++;
		if(line[j]>='a'&&line[j]<='z')
		b ++;
		if(!(line[j]>='0'&&line[j]<='9') && !(line[j]>='a'&&line[j]<='z') && !(line[j]>='A'&&line[j]<='Z'))
		c ++;
		if(line[j]>='A'&&line[j]<='Z')
		d ++;
	}
	
	if((a>0&&b>0&&c==0&&d==0)||(a>0&&c>0&&b==0&&d==0)||(a>0&&d>0&&c==0&&d==0)||(b>0&&c>0&&a==0&&d==0)||(b>0&&d>0&&a==0&&c==0)||(c>0&&d>0&&a==0&&b==0))
	score ++;
	if((a==0&&b>0&&c>0&&d>0)||(b==0&&a>0&&c>0&&d>0)||(c==0&&a>0&&b>0&&d>0)||(d==0&&a>0&&b>0&&c>0))
	score = score + 2;
	if(a>0&&b>0&&c>0&&d>0)
	score = score + 3;
	
	printf("%d",score);
	return 0;
}
