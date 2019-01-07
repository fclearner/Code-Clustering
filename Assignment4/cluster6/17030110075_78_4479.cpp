#include<stdio.h>
#include<string.h>
int main(){
	int fenshu=0,len,i,leixing=0;
	char str[50];
	scanf("%s",str);
	if((len=strlen(str))==0){
		printf("0\n");
	}
	else {
		fenshu++;
		if(strlen(str)>8)
			fenshu++;
		for(i=0;i<len;++i){
			if(str[i]>='A'&&str[i]<='Z'){
				leixing++;
				break;
			}
		}
		for(i=0;i<len;++i){
			if(str[i]>='a'&&str[i]<='z'){
				leixing++;
				break;
			}
		}for(i=0;i<len;++i){
			if(str[i]>='0'&&str[i]<='9'){
				leixing++;
				break;
			}
		}for(i=0;i<len;++i){
			if(!((str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='z'))){
				leixing++;
				break;
			}
		}
		fenshu=fenshu+leixing-1;
		printf("%d",fenshu);
	}
	return 0;
}
