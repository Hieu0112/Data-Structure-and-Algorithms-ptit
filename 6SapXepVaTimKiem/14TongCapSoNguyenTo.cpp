#include<bits/stdc++.h>
using namespace std;
main(){
	bool a[1000009];
	for(int i=2;i<1000009;i++)
	a[i]=true;
	for(int i=2;i<1000009;i++)
	if(a[i])
	for(int j=2*i;j<1000009;j+=i)
	a[j]=false;
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		bool check=false;
		for(int i=2;i<=n-2;i++)
		if(a[i]&&a[n-i]) {
			cout<<i<<" "<<n-i;
			check=true;
			break;
		}
		if(!check) cout<<"-1";
		cout<<endl;
	}
}
