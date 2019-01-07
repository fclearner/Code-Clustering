#include<stdio.h>
#include<string.h>
int is_dxzm(char a[],int n){
	int p;
	for(p=0;p<n;++p){
		if(a[p]>='A'&&a[p]<='Z'){
		return 1;
	}
			
	}
	return 0;
}

int is_xxzm(char a[],int n){
	int o;
	for(o=0;o<n;++o){
		if(a[o]>='a'&&a[o]<='z'){
		return 1;}
		
	}
	return 0;
}

int is_sz(char a[],int n){
	int i;
	for(i=0;i<n;++i){
		if(a[i]>='0'&&a[i]<='9'){
		return 1;}
		
		
	}
	return 0;
}


int is_fzm(char a[],int n){
	int i;
	for(i=0;i<n;++i){
		if((a[i]<48||a[i]>57)&&(a[i]<97||a[i]>122)&&(a[i]<65||a[i]>90)) return 1;
		return 0;
	}
}

int main(){
	int fs=0;
	char a[60],b[60],c[60],d[60];
	gets(a);
	strcpy(b,a);
	strcpy(c,a);
	strcpy(d,a);
	
	//scanf("%s",a);
	int n=strlen(a);
	//printf("%d\n",n);
	if(n==0){
	printf("0\n");
	return 0;
	}
	else{
		fs=fs+1;
	}
	
	if(n>8){
		fs=fs+1;
	}
	
	int q=0;
	q=is_dxzm(a,n);
	//printf("%d\n",q);
	int w=0;
	w=is_xxzm(b,n);
	//printf("%d\n",w);
	int e=0;
	e=is_sz(c,n);
	//printf("%d\n",e);
	int r=0;
	r=is_fzm(d,n);
	//printf("%d\n",r);
	//printf("%d %d %d %d\n",q,w,e,r);
	int sum=q+w+e+r;
	//printf("%d\n",sum);
	if(sum==2) {
	fs=fs+1;
	}
	else if(sum==3){
	fs=fs+2;
	}
	else if(sum==4){
	fs=fs+3;
	}
	else ;
	
	
	printf("%d\n",fs);
	return 0;
}


