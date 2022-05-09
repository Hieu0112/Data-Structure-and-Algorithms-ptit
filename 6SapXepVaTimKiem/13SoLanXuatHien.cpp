#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		int count=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==k) count++;}
		if(count==0) cout<<"-1";
		else	cout<<count;
		cout<<endl;
	}
}
