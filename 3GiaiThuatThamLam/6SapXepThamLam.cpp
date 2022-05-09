#include<bits/stdc++.h>
using namespace std;
main(){
	int t,n;
	cin>>t;
	bool check;
	while(t--){
		check=true;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)	cin>>a[i];
		for(int i=0;i<n/2;i++)
		if(a[i]+a[n-1-i]!=n+1){
			check=false;
			break;
		}
		if(check) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}