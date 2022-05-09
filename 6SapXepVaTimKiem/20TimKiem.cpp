#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		int check=-1;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==k) check=1;}
		cout<<check;
		cout<<endl;
	}
}
