#include<bits/stdc++.h>
using namespace std;
void xuat(string a){
	int n=a.size();
	for(int i=n-1;i>0;i--){
	if(a[i-1]=='1') 
		if(a[i]=='1') a[i]='0';
		else a[i]='1';
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