#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		map<long,int>arr;
		long count=0;
		long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			arr[a[i]]++;
		}
		for(int i=0;i<n;i++){
		count+=arr[k-a[i]];
		if(k-a[i]==a[i]) count--;
		}
		cout<<count/2<<endl;
	}
 } 
