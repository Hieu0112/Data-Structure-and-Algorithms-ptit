#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	multiset<int>arr;
	while(t--)
	{
		arr.clear();
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		
		for(int i=0;i<k;i++)
		arr.insert(a[i]);
		
		multiset<int>::reverse_iterator it=arr.rbegin();
		cout<<*it<<" ";
		for(int i=k;i<n;i++)
		{
			arr.erase(arr.find(a[i-k]));
			arr.insert(a[i]);
			cout<<*it<<" ";
		}
	cout<<endl;
	}
}
