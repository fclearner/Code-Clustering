#include<stdio.h>
#include<ctype.h> 
#include<string.h> 
#define N 50 

int main()
{
   char str[N];
   int i,level,big=0,small=0,digit=0,others=0; 
   gets(str);
   int len=strlen(str) ;
   if(len==0) level=0;
   else if(len>0&&len<=8)level=1;
   else if(len>8) level=2; 
   for(i=0;str[i]!='\0';i++)
   {
   		if(isupper(str[i])) big++;
		else if(islower(str[i])) small++;
		else if(isdigit(str[i])) digit++;
		else others++;
   }
    if(big>0&&small>0) 
	{
	level=level+1;
	if(digit>0)
	{	level=level+1;
			if(others>0)
			level=level+1;
	} 
	else if(others>0)
	{	level=level+1;
			if(digit>0)
			level=level+1;
	} 
	} 
    else if(big>0&&digit>0) 
	{
	level=level+1;
	if(small>0)
	{	level=level+1;
			if(others>0)
			level=level+1;
	} 
	else if(others>0)
	{	level=level+1;
			if(small>0)
			level=level+1;
	} 
	} 
    else if(big>0&&others>0) 
    {
	level=level+1;
	if(digit>0)
	{	level=level+1;
			if(small>0)
			level=level+1;
	} 
	else if(small>0)
	{	level=level+1;
			if(digit>0)
			level=level+1;
	} 
	} 
    else if(small>0&&digit>0) 
    {
	level=level+1;
	if(big>0)
	{	level=level+1;
			if(others>0)
			level=level+1;
	} 
	else if(others>0)
	{	level=level+1;
			if(big>0)
			level=level+1;
	} 
	} 
    else if(others>0&&small>0) 
    {
	level=level+1;
	if(digit>0)
	{	level=level+1;
			if(big>0)
			level=level+1;
	} 
	else if(big>0)
	{	level=level+1;
			if(digit>0)
			level=level+1;
	} 
	} 
    else if(digit>0&&others>0) 
    {
	level=level+1;
	if(big>0)
	{	level=level+1;
			if(small>0)
			level=level+1;
	} 
	else if(small>0)
	{	level=level+1;
			if(big>0)
			level=level+1;
	} 
	} 
    
    
	printf("%d",level);
    
   return 0;
} 
    
      
