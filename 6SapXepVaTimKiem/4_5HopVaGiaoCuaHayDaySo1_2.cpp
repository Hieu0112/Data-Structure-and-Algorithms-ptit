#include<bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		set<int>arr;
		set<int>arr1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			arr.insert(a[i]);
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
			int x=arr.size();
			arr.insert(b[i]);
			if(arr.size()==x)
			arr1.insert(b[i]);
		}
		
		for(set<int>::iterator it=arr.begin();it!=arr.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
		for(set<int>::iterator it=arr1.begin();it!=arr1.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
	}
}
