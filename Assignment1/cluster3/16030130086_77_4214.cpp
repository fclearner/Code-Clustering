#include<iostream>

using namespace std;
int pe(int a){
	return a>=0?a:-a;
}
int main(){
	int n,max=0;
	int d[100];
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>d[i];
		if (i>0){
			if (pe(d[i]-d[i-1])>max){
				max=pe(d[i]-d[i-1]);
			}
		}
	}
	cout<<max;
	return 0;
}
