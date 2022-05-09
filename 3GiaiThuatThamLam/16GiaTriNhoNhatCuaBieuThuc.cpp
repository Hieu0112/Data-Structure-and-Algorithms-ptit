#include<bits/stdc++.h>
using namespace std;
main(){
	int t,n;
	cin>>t;while(t--){
		cin>>n;
		long long a[n],b[n],s=0;
		for(auto &x:a)	cin>>x;
		for(auto &x:b)	cin>>x;
		sort(a,a+n);
		sort(b,b+n,greater<long long>());
		for(int i=0;i<n;i++)
		s+=a[i]*b[i];
		cout<<s<<endl;
	}
}