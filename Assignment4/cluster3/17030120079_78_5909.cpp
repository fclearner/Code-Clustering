#include<stdio.h>
int main(){
	char k[50];
	int i=0,t=0,n,a,b,c,d,p;
	a=b=c=d=0;
    for(i=0;i<50;i++){
		scanf("%c",&k[i]);

		if(k[i]=='\n') break;
		
		if(k[i]>='0'&&k[i]<='9')a++;
		else if(k[i]>='a'&&k[i]<='z')b++;
		else if(k[i]>='A'&&k[i]<='Z')c++;
		else{d++;}
		

	}
	if(a>0||b>0||c>0||d>0)t++;
	if(a>0&&b>0||a>0&&c>0||a>0&&d>0||c>0&&b>0||d>0&&b>0||c>0&&d>0)t++;
	if(a>0&&b>0&&c>0||a>0&&b>0&&d>0||d>0&&b>0&&c>0)t++;
	if(a>0&&b>0&&c>0&&d>0)t++;
	if(i>8)t++;
	i=i-1;
	printf("%d",t);
	return 0;
}
