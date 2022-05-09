#include<bits/stdc++.h>
using namespace std;
void xuat(string a){
	int n=a.size();
	for(int i=0;i<n-1;i++){
	if(a[i]=='1') 
		if(a[i+1]=='1') a[i+1]='0';
		else a[i+1]='1';
	}
	cout<<a<<" ";
}
main(){
	int t;
	cin>>t;
	string a;
	while(t--){
		cin>>a;
		xuat(a);
		cout<<endl;
	}
}