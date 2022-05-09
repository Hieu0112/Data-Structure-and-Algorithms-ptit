#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,t,k;
	cin>>t;
	while(t--)
	{
	int count=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	if(a[i]+a[j]==k) count++;
	cout<<count<<endl;
	}
}
