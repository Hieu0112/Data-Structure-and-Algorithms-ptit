#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		set<int>arr;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			arr.insert(a[i]);
		}
		if(arr.size()<2) cout<<"-1";
		else {
			set<int>::iterator it=arr.begin();
			cout<<*it<<" ";
			it++;
			cout<<*it;
		}
		cout<<endl;
	}
 } 
