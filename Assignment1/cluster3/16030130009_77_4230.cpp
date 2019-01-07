#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int j=0;
	cin>>n;
	int a[100],b[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]>a[i-1]){
			b[j]=a[i]-a[i-1];
			j++;
		}
		else{
			b[j]=a[i-1]-a[i];
			j++;
		}
	}
	sort(b,b+j-1);
	cout<<b[j-2];
	return 0;
}
