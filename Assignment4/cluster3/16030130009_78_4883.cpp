#include<bits/stdc++.h>
using namespace std;
int main(){
	int s;
	int num1=0,num2=0,num3=0,num4=0;
	cin>>s;
	int len = s.size();
	int score=0;
	if(len==0){
		score = 0;
	}
	else{
		for(int i=0;i<len;i++){
			if(s[i]>='0'&&s[i]<='9'){
				num1++;
			}
			else if(s[i]>='A'&&s[i]<='Z'){
				num2++;
			}
			else if(s[i]>='a'&&s[i]<='z'){
				num3++;
			}
			else{
				num4++;
			}
		}
		if(num1+num2+num3+num4==len){
			if(len>8){
				score=5;
			}
			else{
				score=4;
			}
			
		}
		if((num1+num2+num3==len)||(num1+num3+num4==len)||(num2+num3+num4==len)){
			if(len>8){
				score=4;
			}
			else{
				score=3;
			}
			
		}
		if((num1+num2==len)||(num1+num3==len)||(num1+num4==len)||(num2+num3==len)||(num2+num4==len)||(num3+num4==len)){
			if(len>8){
				score=3;
			}
			else{
				score=2;
			}
			
		}
		if(num1==len||num2==len||num3==len||num4==len){
			if(len>8){
				score=2;
			}
			else{
				score=1;
			}
			
		}
		
	}
	//cout<<num1<<" "<<num2<<ends<<num3<<ends<<num4<<endl;
	cout<<score;
	return 0;
}
