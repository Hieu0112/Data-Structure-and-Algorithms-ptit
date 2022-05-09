#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long n,x=0,y=0;
		cin>>n;
		long a[n];
		for(auto &k:a) cin>>k;
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(i%2==0) x=10*x+a[i];
			else y=10*y+a[i];
		}
		cout<<x+y<<endl;
	}
}