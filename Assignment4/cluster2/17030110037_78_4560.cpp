#include<stdio.h>
#include<string.h>

int main()
{
	char pw[50];
	gets(pw);
	int sc = 0;
	if(strlen(pw))  sc++;
	if(strlen(pw) > 8)  sc++;
	int m[4] = {0,0,0,0};
	for(int i = 0; i < strlen(pw); i++)
	{
		if('A' <= pw[i] && pw[i] <= 'Z')  { m[0] = 1; continue;}
		if('a' <= pw[i] && pw[i] <= 'z')  { m[1] = 1; continue;}
		if('0' <= pw[i] && pw[i] <= '9')  { m[2] = 1; continue;}
		m[3] = 1;
	}
	int x = 0;
	for(int i = 0; i < 4; i++)
		if(m[i] == 1)  x++;
	switch(x)
	{
		case 2 : sc++; break;
		case 3 : sc+=2; break;
		case 4 : sc+=3; break;
	}
	printf("%d", sc);
	return 0;
}
