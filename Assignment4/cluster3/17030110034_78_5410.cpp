#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	gets(a);
	int t=strlen(a);
	int sum=0;
	if(t==0){
		sum=0;
	}
	else if(t<=8){
		sum=1;
	}
	else{
		sum=2;
	}
	int p=0,q=0,f=0,w=0;
	for(int i=0;i<t;i++){
		if(a[i]>='0'&&a[i]<='9'){
			p++;
		}
		else if(a[i]>='a'&&a[i]<='z'){
			q++;
		}
		else if(a[i]>='A'&&a[i]<='Z'){
			f++;
		}
		else{
			w++;
		}
	}
	if((p==0&&q==0&&w==0&&f!=0)||(p==0&&q==0&&f==0&&w!=0)||(f==0&&q==0&&w==0&&p!=0)){
		sum=sum;
	}
	else if((p==0&&q==0&&w!=0&&f!=0)||(p==0&&w==0)&&q!=0&&f!=0||(p==0&&f==0&&w!=0&&q!=0)||(w==0&&q==0&&p!=0&&f!=0)||(w==0&&f==0&&q!=0&&p!=0)||(f==0&&q==0&&w!=0&&p!=0)){
		sum=sum+1;
	}
	else if((p!=0&&q!=0&&w!=0&&f!=0)){
		sum=sum+3;
	}
	else if((p!=0&&q!=0&&w==0&&f!=0)||(p==0&&q!=0&&f!=0&&w!=0)||(f==0&&q!=0&&w!=0&&p!=0)||(f!=0&&q==0&&w!=0&&p!=0)){
		sum=sum+2;
	}
	printf("%d",sum);
}
	
